#include<iostream>
using namespace std;

int main()
{
	int n,s,c=0;
	cin>>n>>s;
	int a[s];
	for(int i=0;i<s;i++)
		cin>>a[i];
	for(int i=0;i<s;i++)
		if(n==a[i])
			c++;
	cout<<c;
	return 0;
}