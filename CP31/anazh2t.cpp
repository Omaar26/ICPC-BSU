#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main (){

    int t; cin>>t;
    while (t--){

        int x,y;
        cin>>x>>y;
        if ( (x%2==1) && (y%2==1)){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

