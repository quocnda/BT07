#include<iostream>
#include<string>
using namespace std;
char* copy_char(char* a,int n)
{
    char* tmp=new char(n+1);
     return tmp;
}
int main() {
     char s[5];
     cin>>s;
     cout<<s<<'\n';
     cout<<*(s+1);
}