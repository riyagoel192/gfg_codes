// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


void rotateArr(int arr[], int d, int n){
    // code here
    // int temp;
    // int i;
    // int c=1;
    // while(c<=d)
    // {
    //     temp=arr[0];
    //     for(i=0;i<n-1;i++)
    //     arr[i]=arr[i+1];
    //     arr[i]=temp;
    //     c++;
    // }
    
     //rotate(arr, arr + (d % n), arr + n);
    
    rotate(arr,arr+d,arr+n);
    
    // reverse(arr,arr+d);
    // reverse(arr+d,arr+n);
    // reverse(arr,arr+n);
}




// { Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}  // } Driver Code Ends
