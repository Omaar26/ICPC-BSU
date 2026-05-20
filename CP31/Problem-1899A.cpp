#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*

        solution idea, you can change any intger to be div by 3 unless it is, if the first has 6 then if he either added
        or subtracted 1 he would always have a number not divisble by 3, and thus the second player wins after 10 steps

        a harder version of this would be to swap 3 for any number, i think we would do the same thing 
    */


    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n%3==0) {
            cout<<"Second"<<endl;
        }
        else {
            cout<<"First"<<endl;
        }

    }



    return 0;
}


