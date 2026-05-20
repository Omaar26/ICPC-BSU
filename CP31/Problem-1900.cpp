#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*

        solution idea,
        if you have 3 consective empty cells you basically have infinite water, and thus can move the middle cell as many 
        times as you would like, so you only need 2 additions of water, else, you would have to fill them one by one

        a harder version of this would be to optimze both palcing and moving water across whatever that is 
    */


    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        int cons=0;
        int count=0;
        int wallcount=0;
        int empty=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='.') {
                cons++;
                empty++;
            }
            if (s[i]=='#') {
                cons=0;
                wallcount++;
            }

            if (cons==3) {
                break;
            }
        }

        if(cons==3){
            cout<<2<<endl;
        }
        else {
            cout<<empty<<endl;
        }


    }


    return 0;
}

