#include <iostream>
#include <fstream>

int main()
{
    //打印10个字符
    std::ifstream file;
    file.open("test.txt", std::ios::in);
    if(!file) {
        std::cout << "不存在\n";
    }
    else {
        std::cout << "文件存在,前10个字符为: \n";
        char line[20];
        file.getline(line, 10);
        std::string str = line;
        std::cout << str << std::endl;
    }
    file.close();
}
