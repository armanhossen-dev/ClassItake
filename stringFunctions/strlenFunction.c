//strlen() it returns the length of the string
#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Arman Hossen Ripon";
    //size_t is an unsigned integer type, the return value is always non-negative.
    //%zu is the portable and recommended format specifier. for size_t
    size_t len = strlen(str);
    printf("length of str = %zu\n", len);
    return 0;
}