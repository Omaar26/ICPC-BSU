#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;



int main(){

    int arraysize;
    cin>>arraysize;
    long long numbers[arraysize];
    int divcnt=0;
      for (int i=0; i<arraysize; i++){
        cin>>numbers[i];
          int cnt=0;
          int n=numbers[i];
          for(int j=2; j*j<=n; j++){
            if(n%j==0){
                cnt++;
                if (n/j==j){
                    cnt++;
                }
            }
          }
         // cout<<cnt<<endl;
          if (cnt==2){
            cout<<"YES\n";
          }
          else {
            cout<<"NO\n";
          }

        }

    
    return 0;
}








