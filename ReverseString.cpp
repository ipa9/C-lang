#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100];//declare a character array
    int i,len,temp;
    cout<<"Enter a String: ";
    cin>>str; //input string
    len=strlen(str);
    for(i=0; i<len/2; i++){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
   cout<<str;
    getch();
    return 0;
}
