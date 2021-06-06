
#include <iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

vector<vector<int> >triplet(vector<int> a, int target)
{
    sort(a.begin(),a.end());
    vector<vector<int> >res;

    //pick every a[i] and pair sum problem on remaining using 2 pointer approach
    for(int i=0;i<a.size()-3;i++)
    {
        int j=i+1;
        int k=a.size()-1;

        while(j<k)
        {
                if((a[j]+a[k])==target-a[i])
                {
                        res.push_back({a[i],a[j],a[k]});
                        j++;
                        k--;
                }
                else if((a[j]+a[k])>target-a[i])
                k--;

                else j++;
        }
        
    }

    return res;

}
int main() {
	// your code goes here
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int target=18;
    vector<vector<int> >res = triplet(arr,target);
    
    for(auto s:res)
    {
        for(auto num:s)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
	return 0;
}


