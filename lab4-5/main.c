#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20],d[20];
    printf("enter your first name\n");
    scanf("%s",&c);
    printf("enter your last name\n");
    scanf("%s",&d);
    printf("your full name is %s %s ",c,d);

    return 0;
}
