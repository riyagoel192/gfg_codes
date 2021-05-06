// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int func(int arr[], int low, int high, int K)
    {
        
        if(high>=low){
        
            int mid1 = low + (high-low)/3;
            int mid2 = high - (high-low)/3;
            
            if((arr[mid1]==K) || (arr[mid2]==K)) return 1;
            
            if(K<arr[mid1])
            func(arr,low,mid1-1,K);
            
            else if(K>arr[mid2])
            func(arr,mid2+1,high,K);
            
            else
            func(arr,mid1+1,mid2-1,K);
            
        }
        
        else return -1;
        
    }
    
    int ternarySearch(int arr[], int N, int K) 
    { 
    
       // Your code here
       int res = func(arr,0,N-1,K);
       return res;
       
    }
};

// { Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends
