
#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pair_sum(vector<int> arr, int target)
{
    unordered_set<int> s;
    vector<int>v;

    for(int i=0;i<arr.size();i++)
    {
        if(s.find(target-arr[i])!=s.end())
        {
            v.push_back(arr[i]);
            v.push_back(target-arr[i]);
            return v;
        }
        s.insert(arr[i]);
    }

    return {};
}
int main() {
	// your code goes here
    vector<int> arr{10,5,2,3,-6,9,11};
    int target=4;
    vector<int> res = pair_sum(arr,target);
    if(res.size()==0)
    cout<<"No such pair";

    else
    cout<<res[0]<<" "<<res[1];
	return 0;
}


