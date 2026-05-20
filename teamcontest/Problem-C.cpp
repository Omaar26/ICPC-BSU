#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
using namespace std;



int main(){

    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for (int j=0; j<s.size();j++){
            for (int i=0; i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                s[i]=s[i+1];
                s.erase(1,i+1);
            }
          }
    }
        
 
         cout<<s.size()<<endl;
    }
    return 0;
}