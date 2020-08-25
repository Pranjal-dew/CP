#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	
	int c0=0,c1=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==0)
			c0++;
		if(a[i]==1)
			c1++;
	}
	cout<<c0<<" "<<c1<<endl;
	for (int i = 0; i < n; ++i)
	{
		if(i<c0)
			a[i]=0;
		if(i<(c0+c1) and i>=c0)
			a[i]=1;
		if(i>=(c0+c1))
			a[i]=2;
	}

	for (int i = 0; i < n; ++i)
		cout<<a[i]<<" ";

	return 0;
}