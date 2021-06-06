
#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int high_mountain(vector<int> a)
{
    int n = a.size();

    int large = 0;

    for(int i=1;i<=n-2; )  //start from i=1 and go till 2nd last element as first and last element cant be peak
    {
            //check if a[i] is peak or not 
            if(a[i-1]<a[i] && a[i+1]<a[i])
            {
                //do some work
                int count=1; //for cuurent element
                int j=i;
                //count backward
                while(j>=1 && a[j]>a[j-1])
                {
                    j--;
                    count++;
                }

                //count forward
                while(i<n-2 && a[i]>a[i+1])
                {
                    i++;
                    count++;
                }

                large = max(large,count);
            }
            else
            i++; //move to next element

    }

    return large;
}
int main() {
	// your code goes here
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    int r = high_mountain(arr);
    cout<<r;

	return 0;
}


