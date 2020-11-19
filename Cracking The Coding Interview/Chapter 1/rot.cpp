#include<iostream>
using namespace std;

int main()
{
	int n,s;
	cout<<"Enter Size of Matrix(NxN) & Elemnts:"<<endl;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
		
	while(1)
	{
		cout<<"1. Rotate Clockwise"<<endl;
		cout<<"2. Rotate Anticlockwise"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"4. Quit"<<endl<<"Press : ";
		cin>>s;
		
		if(s>=1 and s<=4)
		{	
			switch(s)
			{
				case 1:
				{
					for(int i=0;i<n;i++)
					for(int j=i;j<n;j++)
						if(i!=j)
							swap(arr[i][j],arr[j][i]);

					for(int i=0; i<n/2;i++)
					for(int j=0;j<n;j++)
					swap(arr[j][i],arr[j][n-1-i]);

					
					cout<<"Done : Clockwise Rotation"<<endl;
					break;
				}

				case 2:
				{
					for(int i=0;i<n;i++)
					for(int j=i;j<n;j++)
						if(i!=j)
							swap(arr[i][j],arr[j][i]);

					for(int i=0; i<n/2;i++)
					for(int j=0;j<n;j++)
					swap(arr[i][j],arr[n-i-1][j]);

			
					cout<<"Done :  Anticlockwise Rotation"<<endl;
					break;

				}

				case 3:
				{
					for(int i=0;i<n;i++)
					{for(int j=0;j<n;j++)
						cout<<arr[i][j]<<" ";
						cout<<endl;
					}
					break;
				}

				case 4:
				{
					return 0;	
				}
			}
			}
		
		else
			cout<<"Not Valid, try Again."<<endl;
	}

	return 0;
}