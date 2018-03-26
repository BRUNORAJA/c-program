
  
#include <stdio.h>>
#include <string>
using namespace std;
  

void appendDemo(string str1, string str2)
{
   
    str1.append(str2);
    printf("\nUsing append() : ";
    printf("%s,%s",str1,str2);
}
 void  main()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks");
  
    printf("%s,%s",str1 \n);
    appendDemo(str1, str2);
  
    getch();
}
