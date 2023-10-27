#include <stdio.h>
#include <stdlib.h>

int main()
{
 char str1[100];
    char str2[100];
    printf("enter a string : ");
    scanf("%s",str1);
    for (int i=0 ; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("printing the copy of the string %s", str2);
    return 0;
}
