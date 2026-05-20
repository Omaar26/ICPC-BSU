#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    /*
    
    sol idea 
    basically doing what it told me, i made a nested loop on line 21 to make sure that i go through the
    array after im done with like the first patch of swaps, n is small here so i can afford to do that
    why exactly do i loop n*n ? idk it seemed right 
    
    */
    int t; cin>>t;
    while(t--) {

        int n; cin>>n;
        int a[n];
        int flag=0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
    for (int j=0; j<n; j++) {
        for (int i=1; i<n-1; i++) {
            if (a[i-1]<a[i] && a[i]>a[i+1]) {
                int tmp=0;
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
            }
        }
    }
        

           for (int i=0; i<n; i++) {
               cout<<a[i]<<" ";
           }

        cout<<endl;
        for (int i=1;i<n; i++) {
            if (a[i]<a[i-1]) {
                flag=1;
            }
        }

        if (flag) {
            cout<<"NO\n";
        }
        else {
            cout<<"Yes\n";
        }

    }

    return 0;
}






