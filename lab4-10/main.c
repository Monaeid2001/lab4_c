#include <stdio.h>
#include <stdlib.h>

int main()
{
 char str[100];
    printf("enter a string : ");
    scanf("%s",str);
    int i=0;
    while(str[i] != '\0')
    {
        int c = (int) str[i];
        switch(c)
        {
        case 65 ... 90:
        case 97 ... 122:
            printf("%c", str[i]);
            break;
        }
        i++;
    }
    return 0;
}
