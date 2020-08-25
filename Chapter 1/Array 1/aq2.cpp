#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		if(m==a[i])
		{
			cout<<"TRUE";
			return 0;
		}
	cout<<"FALSE";
	return 0;
}