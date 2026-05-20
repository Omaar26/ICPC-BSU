#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
 /*
 
     solution idea, i can sort the array with any number of "swap" aka here "reverses"
    the only case where this breaks is if the array isnt sorted and u can swap only 1 elemnt. 
    a harder version of the problem would be to give the min number of swaps needed to sort the array
 */
    int t;
    cin>>t;
    while (t--){
    int a;
    cin>>a;
    int b;
    cin>>b;
    vector<long long> nums(a);

    for (int i=0; i<a; i++){
        cin>>nums[i];
    }

    if (a==1 && b==1){
        cout<<"YES"<<endl;
    }
     
    else if(b==1 && a!=1){
        int isSorted=1;
        for (int i=1; i<a; i++){
            if(nums[i]<nums[i-1]){
                isSorted=0;
            }
        }

        if(isSorted){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
    
    else{
        cout<<"YES"<<endl;
    }




    }
    


    return 0;
}
