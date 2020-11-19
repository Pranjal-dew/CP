//Inversion of array
//Quick sort - Error


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]

long long int partition(long long a[], long long start,long long end, long long c)
{
    long long int pivot=a[end];
    long long int pindex=start;
    
    for(int i=0;i<end-1;++i)
    {
        if(pivot<a[i])
        {
            swap(a[i], a[pindex]);
            ++pindex;
        }
    }
    if(pindex!=end)
    {
        swap(a[pindex],a[end]);
        ++c;
    }
}

long long int quicksort(long long a[], long long start,long long end, long long c)
{
    long long int pindex=partition(a, start, end,&c);
    quicksort(a,start,pindex-1);
    quicksort(a,pindex+1,end);
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count=0;
    quicksort(arr, 0, N-1,&count);
    return count;
}


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends