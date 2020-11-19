#include <iostream>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	int arr[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>arr[i][j];

	// Check 1st row and col
		bool r_zero=false,c_zero=false;

		for(int i=0;i<r;i++)
			if(arr[0][i]==0)//Check for col
				c_zero=true;
		for(int i=0;i<r;i++)
			if(arr[i][0]==0)//Check for row
				r_zero=true;

		//Checking remainning array
		for(int i=1;i<r;i++)
		{for(int j=1;j<c;j++)
			if(arr[i][j]==0)
			{
				arr[i][0]=0;
				arr[0][j]=0;
				//cout<<"Hit";
			}
		}

	//Starting to Nullification
		for(int i=1;i<r;i++)
			if(arr[i][0]==0)
				for(int j=0;j<c;j++)
					arr[i][j]=0;

		for(int i=1;i<c;i++)
			if(arr[0][i]==0)
				for(int j=0;j<r;j++)
					arr[j][i]=0;

		if(r_zero==true)
			{
				for(int i=0;i<r;i++)
					arr[i][0]=0;
			}

		if(c_zero==true)
			{
				for(int i=0;i<c;i++)
					arr[0][i]=0;
			}

		//printing
		for(int i=0;i<r;i++)
		{for(int j=0;j<c;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
		}

	return 0;
}