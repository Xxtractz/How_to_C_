#include <unistd.h>

void    printchar(char c){
    write(1, &c, 1);
}

int main(){
    printchar(67);
    printchar('\n');
    return 0;
} 