#include<stdio.h>

void main(){
    
    char ch = 'r'; 
    printf("%c\n",ch);
    char name[] = "Rafiul Riyad";
    printf("%s\n",name);
    //string = akta char er array

    //char str[size];
    //size = 11, akta size besi nibi, karon ses '\0' NULL character bose jai, end of string bujai 

    //char user[20]; //arman hossen
    //scanf("%s",&user); // white space pabe tokon eta input neya ses kre dibe
    //printf("scanf user kore input : %s\n", user);
    //scanf(),gets(),fgets()

    /*
    char ur_name[20];
    printf("Enter ur_name : ");
    gets(ur_name);     
    printf("gets user kore input : %s\n", ur_name);
    puts(ur_name);
    */

    //fgets(variableName, sizeof(arrayName), stdin);
    char rafi[30];
    printf("fgets use kore input : ");
    fgets(rafi, sizeof(rafi), stdin);
    printf("%s\n",rafi);
    ////puts(rafi);
    
}