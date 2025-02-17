//strncpy() copies n characters from source to destination
#include<stdio.h>
#include<string.h>

int main(){
    char source[] = "Arman Hossen";
    char destination[20];
    strncpy(destination, source, 5);// This will copy 5 characters from the beginning.
    //then i have to put null at the index 5
    destination[5] = '\0'; // Null terminate manually, this will mean as the end of the string
    
    printf("Destination string = %s\n", destination);

    return 0;
}