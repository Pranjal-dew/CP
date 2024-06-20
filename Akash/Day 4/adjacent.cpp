#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;

    for(int i=0;i<str.length();++i)
    {
        
        if(str[i]>="a" and str[i]<='z')
        {
            cout<<true;
        }

        else{
            cout<<false;
        }
    }

    return 0;
}