#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length()-1;++i)
    {
        if(str[i]>='0' and str[i]<='9')
        {
            str[i]=str[i]-'0';
            str[i+1]=str[i+1]-'0';
        }
        
    }

    return 0;
}

bool isOdd(int number)
{
    return number/2==1?true:false;
}