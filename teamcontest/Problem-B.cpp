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
       int n;
       cin>>n;
                 stack<int> yeees;

       for(int i=0; i<n; i++){
        string s;
        cin>>s;
      //  cout<<"my string is: "<<s<<endl;
       
    for (int i=0; i<4; i++){
        if(s[i]=='#'){
            yeees.push(i+1);
        }
    }
       }

    while(!yeees.empty()){
            cout<<yeees.top()<<" ";
            yeees.pop();
        }

       

        
       cout<<endl;

    }

    return 0;
}

