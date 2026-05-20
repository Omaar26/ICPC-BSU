#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    int t; cin>>t;

    while (t--){
        int x; cin>>x;
        vector<int> arr(x);
        vector<int> pref(x+1);
        pref[0]=0;
        int no=0;
        int penalty=0; 
        for (int i=0; i<x; i++){
        cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        for (int i=0; i<x; i++){
        pref[i+1]=pref[i]+arr[i];
        if (pref[i]<=300){
            no++;
            penalty+=pref[i]; 
            }
        }

        int ans=no-1;
        cout<<ans<<" "<<penalty<<"\n"; 
      //  for (int i=0; i<=x; i++){
      //      cout<<"pref "<<i<<" "<<pref[i]<<endl;
      //  }


    }


    return 0;
}

