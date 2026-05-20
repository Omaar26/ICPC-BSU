#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main (){

    int t; cin>>t;
    while (t--){
        int x; cin>>x;
        string s;
        cin>>s;
        int left=0;
        int right=0;
        for (int i=0; i<x; i++){
            if (s[i]=='('){
                left++;
               // cout<<"LEst\n";
            }
            else {
                right++;
               // cout<<"POs\n";
            }
        }

       // cout<<"counts "<<endl;
       // cout<<left<<endl;
       // cout<<right<<endl;

        if(left==right){
            cout<<"YES"<<endl;
        }
        else {
             cout<<"NO"<<endl;
            }
    }
    return 0;
}


