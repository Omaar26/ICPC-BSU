#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;



int main(){

    int w;
    cin>>w;
    int alomst=0;
      for (int q=2; q<=w; q++){
          int cnt=0;
          int n=q;

          // some notes: the below loop changes the value of q, so we made another varible to make n safe

        for (int i=2; i*i<=n; i++){
              if (n%i!=0){      // this here skips the number i if its not a divsor of n  
                continue;
            }
            while(n%i==0){  // now i is a diviosr 
                n=n/i;  // this line make sure we get rid of all multiples of that prime (2^x) 
            }

            cnt++;  // now we got one prime factor down
        }

        if(n > 1) {     // this loop idk really what it does but it makes it work 
            cnt++;
        }

        if(cnt==2){
            alomst++;
        }

      }

    cout<<alomst<<endl;


    return 0;
}








