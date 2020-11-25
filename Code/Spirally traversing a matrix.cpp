//Spirally traversing a matrix



#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends










class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        
        int high=0,left=0,dir=0;
        int low=r-1,right=c-1;
        
        vector<int> ans;
        
        while(high<=low and left<=right)
        {
            //cout<<endl<<"direction="<<dir<<endl;
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                    {
                        //cout<<i<<" ";
                        ans.push_back(matrix[high][i]);
                        //cout<<matrix[high][i]<<" ";
                    }
                high++;
            }
            if(dir==1)
            {
                for(int i=high;i<=low;i++)
                    {
                        //cout<<i<<" ";
                        ans.push_back(matrix[i][right]);
                        //cout<<matrix[i][right]<<" ";
                    }
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                    {
                        //cout<<i<<" ";
                        ans.push_back(matrix[low][i]);
                        //cout<<matrix[low][i]<<" ";
                    }
                low--;
            }
            if(dir==3)
            {
                for(int i=low;i>=high;i--)
                    {
                        //cout<<i<<" ";
                        ans.push_back(matrix[i][left]);
                        //cout<<matrix[i][left]<<" ";
                    }
                    
                left++;
            }
            
            dir=(dir+1)%4;
        }
    return ans;
    }
};



// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends