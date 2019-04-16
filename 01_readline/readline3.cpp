#include <iostream>
#include <fstream>

//打印两行
int main()
{
    std::ifstream file;
    file.open("test.txt", std::ios::in);
    if(!file) {
        std::cout << "不存在\n";
    }
    else {
        std::cout << "文件存在,前两行内容为: \n";
        std::string line;
        for(int i =0; i < 2; i++) {
            getline(file, line);
            if(line.empty())
                continue;
            std::cout << line << std::endl;
        }
    }
    file.close();
}
