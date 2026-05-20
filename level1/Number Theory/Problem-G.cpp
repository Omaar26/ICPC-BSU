#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#define ll long long 
using namespace std;




    long long gccd(long long a, long long b){
        long long r;
        if (a==b && a==0){
            return 0;
        }
        if(b<a){
            swap(b,a);
        }

        if(b==0){
            return a;
        }

            r=a%b;
            while(r!=0){
                a=b;
                b=r;
                r=a%b;
            }
        

        return b;
    }



int main(){

    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll x;
        if (b%a==0){
            x=b*b/a;
        }
        else {
            x= b*a/gccd(a,b);
        }

        cout<<x<<endl;
    }
    
    return 0;
}










