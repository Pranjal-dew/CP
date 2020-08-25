#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	a^=b;
	b^=a;
	a^=b;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n/2;i++)
		swap(a[i],a[n-1-i]);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}