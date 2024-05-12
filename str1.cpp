#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[20];
    char str1[20];
    cout<<"enter your name \n";
    cin>>str;
    cout<<"enter your sirname \n";
    cin>>str1;
    
    cout<<strcat(str ,str1);
    cout<<strcmp(str ,str1);
    cout<<strcpy(str1 ,str);
    cout<<"\n"<<strlen(str);
    cout<<"\n"<<strupr(str);
    cout<<"\n"<<strlwr(str);
    cout<<"\n"<<strrev(str);

}
