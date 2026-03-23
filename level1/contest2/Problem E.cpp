#include <cmath>
#include <complex>
#include <iostream>
#include <string>
#include <stack>
#include <set>
using namespace std;

int main() {

      int t;
    cin>>t;
    while(t--) {
        int a,b,l;
        cin>>a>>b>>l;
    int counter=0;
        set<double> approved;
        for (int x=0; x<25; x++) {
            for (int y=0; y<25; y++) {
                 double k= l/(pow(a,x)*pow(b,y));
                if (k-floor(k)==0) {
                    counter++;
                    approved.insert(k);
                    // cout<<k<<endl;
                }
            }
        }

        // cout<<"counter= "<<counter<<endl;
        cout<<approved.size()<<endl;
    }
    return 0;
}


