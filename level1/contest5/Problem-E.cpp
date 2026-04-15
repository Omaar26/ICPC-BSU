#include <iostream> 
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main (){

    int t;
    cin>>t;
    while(t--){
    long long x;
    cin>>x;
    string s;
    string w="";
    s=to_string(x);
    int size =s.size();
        for (int i = 0; i < s.size(); i++) {
        w += s[0];
    }
 
    int n = stoll(w);
    int first=s[0]-'0'; 
    int ans=(size-1)*9+first; 
    if (x>=n){  
        ans=ans;
    }  
    else {
        ans=ans-1;
    }


    cout<<ans<<endl;

    }

    return 0;
}