#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();++i)
    {
        if(str[i]>='A' and str[i]<='Z')
        {
            cout<<char(str[i]-'A'+'a');
        }
        else if(str[i]>='a' and str[i]<='z')
        {
            cout<<char(str[i]-'a'+'A');
        }
        else
        {
            cout<<str[i];
        }
    }

    return 0;
}