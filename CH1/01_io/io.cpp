#include <stdio.h>
#include <unistd.h>

#define SIZE 8000

//open/write/read/close/lseek等提供了不带缓存的IO功能
int main(int argc, char *argv[]) {
    char buf[SIZE];
    int n = 0;
    while((n = read(STDIN_FILENO, buf, SIZE)) > 0)
        if(write(STDOUT_FILENO, buf, n) != n) 
            printf("write error! \n");

    if(n < 0)
        printf("read error! \n");

    return 0;
}
