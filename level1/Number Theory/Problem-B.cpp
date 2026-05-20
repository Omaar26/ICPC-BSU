#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;



int main(){

    long long t;
    cin>>t;
    while(t--){

        long long n;
        cin>>n;
        int flag=0;
        long long m=n;
        while(m>2){
            if(m%2==1){
                flag=1;
                break;
            }

            m=m/2;
        }

        if (flag)
            cout<<"YES\n";
        
        else {
            cout<<"NO\n";
        }
    }


    return 0;
}






