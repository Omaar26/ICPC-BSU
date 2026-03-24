#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

int main() {

        ll n,x;
        cin>>n>>x;
        ll count=0;
        vector<ll> v(n);
        for (ll i=0; i<n; i++){
        cin>>v[i];
        }

        sort(v.begin(),v.end());

       

    ll l=0;
    ll r=n-1;

    while (r>=l){
        if(v[l]+v[r]<=x){
            count++;
            l++;
            r--;
        }
        else {
            r--;
            count++;
        }

    

    }

    cout<<count<<endl;
    return 0;
} 