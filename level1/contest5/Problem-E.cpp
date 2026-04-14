#include <iostream> 
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main (){

    int t;
    cin>>t;
    while(t--){
    long long x;
    cin>>x;
    string s;
    s=to_string(x);
    int size =s.size();
    int first=s[0]-'0'; // to conevrt the ascii shit to a real number 
    int ans=(size-1)*9+first; 
    if (size>s[0]*size){  // i should compare like 679 with 666 , if it greater or smaller 
        ans=ans;
    }
    else {
        ans=ans-1;
    }

    cout<<x<<endl;
    cout<<size<<endl;
    cout<<first<<endl;
    cout<<ans<<endl;

    }

    return 0;
}