#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr = arr; // arr er 5 ta element ase
                    // *ptr = arr, ptr = 1st element  er address sudu assign hobe

    printf("*ptr = %d\n", *ptr);
    //printf("*ptr  er address = %p\n", ptr); 
    ptr = ptr+1;   
    printf("*ptr  = %d\n", *ptr);
    ptr = ptr+1;
     printf("*ptr  = %d\n", *ptr);
    ptr = ptr+1;
    printf("*ptr  = %d\n", *ptr);
    ptr = ptr+1;
    printf("*ptr  = %d\n", *ptr);
    /*
    for(int i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    */
    
    
    return 0;
}