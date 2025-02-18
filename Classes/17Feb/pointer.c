#include<stdio.h>

int main(){
    int num = 20;
    int *ptr_num = &num;
    //printf("%d\n", ptr_num); 

    char ch = 'r'; //'ch' hocce variable , jar vitore 'r' char ta assign ase
    printf("ch : %c\n", ch); 
    char *ptr_ch = &ch; // '*ptr_ch' hocce akta char type er pointer,
                        // '&ch' hocce 'ch' er adderss bujacche
    printf("*ptr_ch : %c\n",*ptr_ch); // r
    printf("ptr_ch address : %p\n", ptr_ch); // Hexa-decimal e address pabo
    /**
    Output:
    ch : r
    *ptr_ch : r
    ptr_ch address : 0061FF13
    */

    return 0;
}
