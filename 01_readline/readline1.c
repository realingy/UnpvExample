#include <stdio.h>

//FILE版本
int main()
{
    char msg[100];
    FILE *file= fopen("test.txt", "r");
    if(file) {
        //打开正确
        //读取一行文本，长度最大为100
        if(fgets(msg, 100, file) != NULL) {
            printf("%s", msg);
        }
        else {
            printf("fgets error!\n");
        }
    }
    else {
        //打开文件错误
        printf("open file error!\n");
    }
    fclose(file);
}
