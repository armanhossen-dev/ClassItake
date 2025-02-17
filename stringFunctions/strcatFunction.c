//strcat() concatenates (appends) two string
//appends means it will add after
#include<stdio.h>
#include<string.h>
int main(){
    
    char str1[]="Arman";
    char str2[]="Hossen";
    strcat(str1, " ");
    strcat(str1,str2);
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    return 0;
}

/**
#include<stdio.h>
#include<string.h>
//take input, then concatenate them as full name output
void getFullName(char *fullName, int size);

void getFullName(char *fullName, int size) {
    char fName[15], lName[15];

    printf("Enter first name: ");
    scanf("%s", fName);

    printf("Enter last name: ");
    scanf("%s", lName);

    // Ensure there is enough space before concatenation
    if (strlen(fName) + strlen(lName) + 1 < size) {
        strcpy(fullName, fName);  // Copy first name
        strcat(fullName, " ");    // Add space
        strcat(fullName, lName);  // Append last name
    } else {
        printf("Error: Name too long!\n");
        fullName[0] = '\0'; // Set empty string on error
    }
}

int main() {
    char fullName[30];  // Declare fullName buffer

    // Call function to get full name
    getFullName(fullName, sizeof(fullName));
    ✅ Uses pass-by-reference (char *fullName) to modify the string in main().

    // Print full name if no error
    if (fullName[0] != '\0') {
        printf("Full Name: %s\n", fullName);
    }

    return 0;
}
*/