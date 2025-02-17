//strcpy() copies one string to another
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Arman";
    //char str1[20] = "Arman";
    char str2[20];
    strcpy(str2,str1);
    //strcpy(dest, src);
    printf("str2 = %s\n", str2);
    return 0;
}