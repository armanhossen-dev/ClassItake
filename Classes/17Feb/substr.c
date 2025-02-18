#include<stdio.h>
#include<string.h>

int main(){
    char FullName[40]; //Arman Hossen Ripon
    fgets(FullName, sizeof(FullName), stdin);

    char wordTOfind[5]; // sen
    scanf("%s", wordTOfind);

    int i,j,kount = 0 ,l, index;
    //wordTofind er 1st char er index, zeor 0,  kuje ber kor si
    for(j = 0; j < strlen(FullName); j++){ // full name er vitoer, 
        if(wordTOfind[0] == FullName[j]){
            kount++;
            for(i = 1; i<(strlen(wordTOfind)-1); i++){
                /*
                
                
                
                
                */
            }
            index = j;
            break;
        }
    }
    
    
    

    return 0;
}