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



int main(){


    int t;
    cin>>t;
    while(t--){
        int max=0;
        int n;
        cin>>n;
      cout<<n/2<<endl;
    } 
    return 0;
}










