#include<iostream>
using namespace std;

int main()
{
	int t,h,val;
	char str;
	cout<<"Enter number of Testcases & Hash : ";
	cin>>t>>h;
	char arr[h][h]={};
	cout<<"Enter char : ";
	while(t--)
	{
		
		cin>>str;
		//cout<<str<<endl;
		//cout<<int(str)<<endl;
		val = int(str);

		//Algo
		int i = 0;
		while(i>=0)
		{
			if(arr[val%h][i]==0)
				{ arr[val%h][i]=str; i=-1;}
			else
				i++;
		}

	}

	for(int i=0;i<h;i++)
	{
		cout<<"["<<i<<"]";
		for(int j=0;j<h;j++)
			if(arr[i][j]!=0)
				cout<<"<="<<arr[i][j];
		cout<<endl;
	}

	return 0;
}