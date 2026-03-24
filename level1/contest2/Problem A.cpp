#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

      int t;
    cin>>t;
    while(t--) {
       string s;
        int flag=0;
        cin>>s;
        for (int i=0; i<s.size(); i++) {
            if (s.substr(i,6)=="harker") {
              flag=1;
            }
        }


    cout<<flag<<endl;

    }
    return 0;
}


