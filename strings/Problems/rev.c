#include <stdio.h>
int main()
{ // word rev..
    char str1[20];
    scanf("%s", &str1);

    int charNumber = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        charNumber++;
    }

    char newstr[charNumber + 1]; // newstr[6]
    for (int j = 0, k = (charNumber - 1); j < charNumber; j++, k--)
    {
        newstr[j] = str1[k]; // arman
    }
    // a r m a n '\0'
    newstr[charNumber] = '\0';
    printf("rev kora por : %s\n", newstr);
    return 0;
}