#include<stdio.h>
int main(){
 printf("enter a character : ");
    while (1)
    {
        char key;
        key = getch();

        switch(key)
        {
        case -32:
            break;
        case 72:
            printf("Extended key it's ascii code is 72");
            break;
        case 75:
            printf("Extended key it's ascii code is 75");
            break;
        case 77:
            printf("Extended key it's ascii code is 77");
            break;
        case 80:
            printf("Extended key it's ascii code is 80");
            break;
        default:
            printf("Normal Key its key is %d", key);
            break;
        }
    }
      return 0;
}
