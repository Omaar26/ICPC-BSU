#include <algorithm>
#include <cmath>
#include <complex>
#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <vector>
using namespace std;

int main() {

      int t;
    cin>>t;
    while(t--) {
            int n;
        cin>>n;
        int flag=1;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        for (int i=1; i<n; i++) {
            if (v[i]==v[i-1]) {
                flag=0;
            }
        }
        if (flag==0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}


