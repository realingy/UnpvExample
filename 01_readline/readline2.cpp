#include <iostream>
#include <fstream>

//按行读取文件
int main()
{
    std::ifstream file;
    file.open("test.txt", std::ios::in);
    if(!file) {
        std::cout << "不存在\n";
    }
    else {
        std::cout << "文件存在，内容为： \n";
        std::string line;
        while(getline(file, line)) {
            if(line.empty())
                continue;
            std::cout << line << std::endl;
        }
    }
    file.close();
}
