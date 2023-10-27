#include <stdio.h>
#include <stdlib.h>

int main()
{
 char str[100];
    printf("enter a string : \n");
    scanf("%s", str);
    int i = 0;
    int count =0;

    while(str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("%d", count);

    return 0;
}
