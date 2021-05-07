// { Driver Code Starts
// Program to find maximum guest at any time in a party
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   sort(Entry, Entry + N);
        sort(Exit,  Exit  + N);
        
        int guestIn = 1, guests = 1;
        int timer   = Entry[0];
        
        int i = 1, j = 0;
        
        while(i < N and j < N)
        {
            if(Entry[i] <= Exit[j])
            {
                guestIn++;
                
                if(guestIn > guests)
                {
                    guests = guestIn;
                    timer  = Entry[i];
                }
                
                i++;
            }
            else
            {
                guestIn--;
                
                j++;
            }
        }
        
        return {guests, timer};
	}

};

// { Driver Code Starts.

 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int entry[n],exit1[n];
        for(i=0;i<n;i++)
        cin>>entry[i];
        for(i=0;i<n;i++)
        cin>>exit1[i];
        Solution obj;

	    vector<int> p = obj.findMaxGuests(entry, exit1, n);
	    cout<<p[0]<<' '<<p[1];
	    cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
