#include <stdio.h>
#include <string.h>
int main() {
   char s[60];
   int i;
   printf("enter a string \n");
   gets(s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32;
      }
   }
   printf("string in upperCase is %s", s);
   return 0;
}
