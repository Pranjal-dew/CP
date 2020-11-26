#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	//code
	int t;  cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	        cin>>a[i][j];
	    
	    int b[n*n];
	    
	    for(int i=0,t=0;i<n;i++)
	    for(int j=0;j<n;j++)
	       {
	           b[t]=a[i][j];
	           ++t;
	       }
	       
	   sort(b, b+(n*n));
	   for(int i=0;i<n*n;i++)
	        cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}