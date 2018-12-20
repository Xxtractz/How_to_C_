#include <unistd.h>

void printchar(char c){
    write(1, &c, 1);
}

// void printstr(char *str){
//     while(*str != '\0'){
//         printchar(*str++);
//     }
// }

void printstr(char *str){
    int i = 0;
    
    while(str[i] != '\0'){
        printchar(str[i++]);
    }
}

int main()
{
    printstr("Hi there this is X\n");
    return 0;
}

