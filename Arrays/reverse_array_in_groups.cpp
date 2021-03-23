// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        // int *b = new int[n];
        
        // int j=k-1;
        // int temp=0;
        // int count;
        // for(int i=0;i<n;i++)
        // {
        //     count=1;
        //     while(count<=3)
        //     {
        //         b[temp++]=arr[j];
        //         j--;
        //         count++;
        //     }
        //     j=j+(2*k)-1;
        // }
        
        // for(int i=0;i<temp;i++)
        // {
        //     cout<<b[i];
        // }
        
        for (int i = 0; i < n; i += k)
{
int left = i;

// to handle case when k is not multiple of n
int right = min(i + k - 1, n - 1);
int temp=0;
// reverse the sub-array [left, right]
while (left < right){
temp=arr[left];
arr[left] = arr[right];
arr[right]=temp;
left+=1;
right-=1;
}
}
// your code here
//return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends
