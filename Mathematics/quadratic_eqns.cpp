// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int>s;
        if((b*b)>(4*a*c))
        {
           // cout<<"Imaginary";
            int x = floor((-b-sqrt((b*b)-(4*a*c)))/(2*a));
            int y = floor((-b+sqrt((b*b)-(4*a*c)))/(2*a));
            if(x>y)
            {
                s.push_back(x);
                s.push_back(y);
            }
            else
            {
                s.push_back(y);
                s.push_back(x);
            }
        }
        else if((b*b)==(4*a*c))
        {
            s.push_back(floor((-b)/(2*a)));
            s.push_back(floor((-b)/(2*a)));
        }
        else
        {
            s.push_back(-1);
        }
        
        return s;
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
