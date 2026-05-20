#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;




     const int N=1e6+15;
    vector<bool> ISPRIIIME (1e6+5,1);
    void seive(){
        ISPRIIIME[0]=ISPRIIIME[1]=0;
        for (long long i=2; i*i<=N; i++){
            if (ISPRIIIME[i]){
                for(long long j=i*i; j<=N; j+=i){
                    ISPRIIIME[j]=0;
                }
            }
        }
    }



int main(){

   

    int t;
    cin>>t;
    seive();
    while (t--){
        long long x;
        cin>>x;
         long long sqaaart=sqrt(x);
        double sq=sqrt(x);
        if ((sqaaart==sq) && (ISPRIIIME[sqaaart])){
           cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }



    return 0;
}








