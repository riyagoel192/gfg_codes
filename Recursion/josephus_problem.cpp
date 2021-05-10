// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int josephus(int n, int k)
{
   //Your code here
   
   //Solution 1
  // return n==1 ? 1:((k + josephus(n-1, k) - 1)%n + 1);
   
   
   //Solution 2
   if(n == 1)
    return 1;
  	else
    return (k-1 + josephus(n - 1, k)) % n + 1;
}

// { Driver Code Starts.

int main() {
	
	int t;
	scanf("%d", &t);//testcases
	while(t--)
	{
		int n,k;
		scanf("%d%d", &n, &k);//taking input n and k
		
		//calling josephus() function
		printf("%d\n", josephus(n,k));
	}
	return 0;
}  // } Driver Code Ends
