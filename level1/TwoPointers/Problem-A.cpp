#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <set>
using namespace std;

int main() {

    int t;
    cin >> t;
    set<int> s;
    for (int i=0; i<t; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    int ans= s.size();
    cout<<ans;
    return 0;
} 

// this solution doesnt use two pointers
// cuz i think its easier that way