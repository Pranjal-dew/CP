#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	cin>>n;
	int a[n],b[n]={};
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<0)
				c++;
		}

	for(int i=0,f1=0,f2=c;i<n;i++)
		{
			if(a[i]<0)
			{
				b[f1]=a[i];
				++f1;
			}
			else
			{
				b[f2]=a[i];
				++f2;
			}
		}
	for (int i = 0; i < n; ++i)
		cout<<b[i]<<" ";
	return 0;
}