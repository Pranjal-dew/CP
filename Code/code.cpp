#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	int tmp=t;
	while(tmp--)
	{
	    cout<<"("<<t-tmp<<")==========================================="<<endl;
	    int n,m;
	    cin>>n>>m;
	    int a1[n], a2[m];
	    for(int i=0;i<n;i++) cin>>a1[i];
	    for(int i=0;i<m;i++) cin>>a2[i];
	   
	    sort(a1,a1+n);
	    sort(a2,a2+m);
	    
	    for(int i=0;i<n;i++) cout<<a1[i];
	    cout<<" ";
	    for(int i=0;i<m;i++) cout<<a2[i];
	    cout<<endl;
	    
	    int i=0,j=0,k=0;
	    int a3[n+m]={};
	   
	    while(i<n and j<m)
	    {
	        cout<<"BEFORE OPERATION :"<<i<<" "<<j<<" "<<k<<endl;
	        if(a1[i]<a2[j])
	            {
	            	if(i<n)
	            	{
	            		a3[k]=a1[i];
	               		i++;
	                	k++;
	                	cout<<"CASE 1:"<<i<<" "<<j<<" "<<k<<endl;
	                
	            	}
	                
	            }
	        else{
	        		if(a1[i]>a2[j])
		    	        {
		    	        	if(j<m)
		    	            {
		    	            	a3[k]=a2[j];
		    	                j++;
		    	                k++;
		    	                cout<<"CASE 2:"<<i<<" "<<j<<" "<<k<<endl;
		    	             }
		    	        }
			        else if(a1[i]==a2[j])
			            {
			            	if(i<n or j<m)
		    	            {
		    	            	a3[k]=a2[j];
		    	                j++;
		    	                i++;
		    	                k++;
		    	                cout<<"CASE 3:"<<i<<" "<<j<<" "<<k<<endl;
		    	            }
		    	            
		    	            }
    	    	}
	        
	    }
	    cout<<"BEFORE While loop :"<<i<<" "<<j<<" "<<k<<endl;
	    if(i>=n)
	    {
	    	for(;j<m;j++)
	    	{
	    		a3[k]=a2[j];
	    		k++;
	    	}
	    }

	    else if(j>=m)
	    {
	    	for(;i<n;i++)
	    	{
	    		a3[k]=a1[i];
	    		k++;
	    	}
	    }
	    
	    cout<<"k="<<k<<endl;
	    
	}
	return 0;
}