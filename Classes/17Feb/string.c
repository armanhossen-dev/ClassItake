#include<stdio.h>
//string er function nia kaj kor bo tai, 
//string.h header file use kor bo
#include<string.h>

int main(){

    /*****************************************************************************************/
    //strcpy - string copy kore , 
    //strcpy(jekhaneCopyKoreRakbo, jakeCopyKorbo);
    /*
    char str[15]="Rafiul Karim";
    char cp[15];
    strcpy(cp,str);
    printf("cp : %s\n", cp);
    */



    /*****************************************************************************************/


    //strcat - 2 ta string ke joralagai, append kore, 
    //first akta string ses e append(add after) kor be, 
    /*
    char first_name[15];
    char mid_name[15];    
    char last_name[15];
    char fullName[50];
    */

    //scanf use kore single word strut nibo
    //fgets use kora jabe
    /*
    printf("Enter first_name : ");
    scanf("%s",first_name);
    
    printf("Enter mid_name : ");
    scanf("%s",mid_name);

    printf("Enter last_name : ");
    scanf("%s",last_name);
    */

    //Arman Hossen Ripon
    //strcat(jarSateAddKorbo, jakeAddKorbo);
    //'c', "c" ,, "string"
    /*
    strcpy(fullName, first_name);
    strcat(fullName, " ");
    strcat(fullName, mid_name);
    strcat(fullName, " ");
    strcat(fullName, last_name);

    printf("Full Name : %s\n", fullName);
    */


    /*****************************************************************************************/
    //strlen jekono string er length janbo, string er vitore koi ta character ase janbo
    //size_t unsigned integer, %zu use kor te hoi

    /*
    char str[]="Rafiul Riyad";
    */
    //int leng = 10;  // -422
    /*
    size_t len = strlen(str); //+ value always
    printf("%zu\n", len);
    */

    /*****************************************************************************************/
    //strcmp string compaire kore , 2ta string 
    //bool T, F, o false, 1 True   
    //
    /*
    char str1[20]="Arman";
    char str2[20]="Arman";
    int val = strcmp(str1, str2); // jodi 'same hoi', then zero return kore,
                                  // jodi <0 hoi, then str1 is smaller
                                  // jodi >0 hoi, then str1 is greater
    printf("val : %d\n", val);
    */
   
   /*****************************************************************************************/

   //Palindrome ,  121, madam,
   //strrev(str)  reverse kore
   
   /**
   char strut[20];
   char copy[20];
   scanf("%s",strut);
   
   //copy korbo
   strcpy(copy, strut);
   strrev(copy);
   if((strcmp(copy, strut)) == 0){
        printf("Yes Palindrome\n");
   }else{
        printf("Not Palindrome\n");
   }


   */
   /*****************************************************************************************/

   //strstr() - finds the first occurrence of a substring
   //Arman Arm
   char str[40]; 
   printf("Enter a sentence : ");
   fgets(str, sizeof(str), stdin);
   
   printf("Enter a word(char in order find): ");
   char findInOrder[6]; // word er char gula por pore kuje ber kor bo
   scanf("%s",findInOrder);
   //mos
   
   //len , 3char, por por jodi take, then amare count, 
   // count kore total count 3 hote hobe, 
   // jokon A, then ami r kuj bo,
   // 0, A, 1-4, 1, 2-4, n, 4  
    int cnt  = 0, index, i;
    i = 0;
    index = 0;
    for(int j = 0; j<strlen(findInOrder); j++){  //k = Arn
        for(i = index; i<strlen(str); i++){  // str = rArman
            if(findInOrder[j] == str[i]){
                cnt++;
                index = i+1; // joto index e ami 'A' kujje pai si
                             // i  = 0
                             // i++, i = 1
                             //index = 1
                break;
            }            
        }
    }
    if(cnt == 0){
        printf("No pore pore pai ni\n");
    }
    if(cnt == strlen(findInOrder)){
        printf("Yes, they exists\n");
    }else{
        printf("Char matched %d\n",cnt);
    }

   






    




    return 0;
}

