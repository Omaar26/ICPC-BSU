#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
       long long a;
       cin>>a;
       long long b;
       cin>>b;
       if(a%b==0){
        cout<<0<<endl;
       }
       else {
        if (a>b){
            long long c=a/b;
            cout<<(c+1)*b-a<<endl;
        }
        else {
          cout<<b-a<<endl;  
        }
       }

    }

    return 0;
}

