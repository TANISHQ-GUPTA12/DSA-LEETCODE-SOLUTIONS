//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
    //create map to store prefix sum
    
    unordered_map<int,int>mp;
    // sum=0;
    int largest=0;
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=A[i];
        if(sum==K)
        {
            largest=max(largest,i+1);
        }
        //else if not found
        if(mp.find((sum-K))!=mp.end())
        {
            largest=max(largest, (i)-mp[sum-K]);
        }
        if(mp.find(sum)==mp.end())
        {
        mp[sum]=i;
    }
    }
    return largest;
        
     
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends