#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long  
using namespace std;



int main() {
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int k;
        cin>>k; 
        vector<vector<ll>> arr(x,vector<ll>(y));
        set<ll> hor;
        set<ll> ver;
        ll horMax=0;
        ll verMax=0;
        
        for (int i=0; i<x; i++) {
            for (int j=0; j<y; j++) {
                cin>>arr[i][j];
            }
        }

        vector<vector<ll>> pre(x,vector<ll>(y)); 
        pre[0][0]=arr[0][0];        
        for (int i=1; i<x; i++){
            pre[0][i]=pre[0][i-1]+arr[0][i];
        }

        for (int i=1; i<y; i++){
            pre[i][0]=pre[i-1][0]+arr[i][0];
        }

        for (int i = 1; i <x; i++) {
            for (int j =1; j < y; j++) {
                pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+arr[i][j];
            }
        }

        for(int i=k-1; i<x; i+=k){
            for(int j=k-1; j<y; j++){
                if (j>=k && i<k){
                    hor.insert(pre[i][j]-pre[i][j-k]);
                }
                else if (i>=k && j>=k){
                    hor.insert((pre[i][j]-pre[i-k][j]-pre[i][j-k]+pre[i-k][j-k]));
                }
                else if (i>=k && j<k){
                     hor.insert((pre[i][j]-pre[i-k][j]));
                }
                else {
                     hor.insert(pre[i][j]);
                }
            }
        }



  //      cout<< "hori sums"<<endl;

         for (auto& it : hor)
            {
         //       cout << it << ' ';
            } 


            horMax= *prev(hor.end()) + *prev(prev(hor.end()));
       //     cout<<horMax<<endl;
        

          for(int i=k-1; i<x; i+=k){
            for(int j=k-1; j<y; j++){
                if (i>=k && j<k){
                    ver.insert(pre[j][i]-pre[j][i-k]);
                }
                else if (j>=k && i>=k){
                    ver.insert((pre[j][i]-pre[j-k][i]-pre[j][i-k]+pre[j-k][i-k]));
                }
                else if (j>=k && i<k){
                     ver.insert((pre[j][i]-pre[j-k][i]));
                }
                else {
                     ver.insert(pre[j][i]);
                }
            }
        }


    //     cout<< "ver sums"<<endl;

         for (auto& it : ver)
            {
          //      cout << it << ' ';
            } 


            verMax= *prev(ver.end()) + *prev(prev(ver.end()));
        //    cout<<verMax<<endl;
        



       // cout<<"hmax "<<horMax<<endl;
      //  cout<<"vmax "<<verMax<<endl;

        int res=max(horMax,verMax);
        cout<<res<<endl; 


    }


    return 0;
}

