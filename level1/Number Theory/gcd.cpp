#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
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

   

   cout<<gccd(12345,67890)<<endl;
   cout<<gccd(54321,9876)<<endl;



    return 0;
}









