#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
    int chCount[256] = {0};
    printf("enter a string: ");
    scanf("%s", str);
    int i=0;
    while(str[i] != '\0')
    {
        int asci = (int)str[i];
        chCount[asci]++;
        i++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (chCount[i] > 0)
        {
            printf("'%c' %d times\n", (char)i, chCount[i]);
        }
    }
    return 0;
}
