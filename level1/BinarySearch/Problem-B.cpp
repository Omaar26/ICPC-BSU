#include <vector>
#include <iostream> 
#include <algorithm>
#define ll long long
using namespace std;

int LowerBinarySearch(vector<ll> &arr, int n, int x){
    int l=0;
    int h=n-1;
    while (l<h){
            int mid=l+(h-l)/2;
        if (arr[mid]<=x){
           l=mid+1;
        }
        else {
            h=mid;
        }
    }

    if (l<n && arr[l]<=x){
        l++;
    }
        return l;
} 

int main (){

    ll n;
    cin>>n;
    ll m;
    cin>>m;
    vector<ll> a(n);
    vector<ll> b(m);
    for (ll i=0; i<n; i++){
        cin>>a[i];
    } 

    sort(a.begin(),a.end());

    for (ll i=0; i<m; i++){
        cin>>b[i];
    }


  for (ll j=0; j<m; j++) {
    ll key=b[j];
    cout<<LowerBinarySearch(a,n,key)<<" ";
     }

    return 0;
}


