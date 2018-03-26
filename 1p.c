
# include <stdio.h>
#include<conio.h>
 

void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
void  main()
{
   char a[] = "Geeks for Geeks";
   reverse(a);
   getch();
}
