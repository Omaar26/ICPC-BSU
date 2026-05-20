#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;




    long long gcd(long long a, long long b){
        long long r;

        if(b<a){
            swap(a,b);
            r=a%b;
            while(r!=0){
                a=b;
                b=r;
                r=a/b;
            }
        }

        return r;
    }


     const int N=1e6+15;
    vector<bool> ISPRIIIME (N,1);
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

   

      cout<<ISPRIIIME[1]<<endl;
      cout<<ISPRIIIME[4]<<endl;
      cout<<ISPRIIIME[9]<<endl;
      cout<<ISPRIIIME[16]<<endl;
   



    return 0;
}








