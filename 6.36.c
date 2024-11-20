#include <stdio.h>

void stringReverse(const char *str) {
    if (*str == '\0') {
        return; // 遇到字符串终止符
    }
    stringReverse(str + 1); // 遞迴處理後續字符
    putchar(*str); 
}

int main() 
{
    const char str[] = "Hello, World!";
    stringReverse(str);
    printf("\n");
    return 0;
}
