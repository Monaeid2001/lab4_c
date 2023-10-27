#include <stdio.h>
#include <stdlib.h>
//#define size 100
int main()
{ char str[100];
    printf("enter characters : \n");
    int flag = 1;
    int i = 0;

    while(i < 100 && flag == 1)
    {
        char c;
        scanf("%c", &c);
        if (c == '\n')
        {
            flag = 0;
        }
        else
        {
            str[i] = c;
            i++;
        }

    }
    str[i] = '\0';
    printf("%s", str);
    return 0;
}
