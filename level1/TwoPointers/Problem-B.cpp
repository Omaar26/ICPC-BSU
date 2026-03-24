#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <set>
using namespace std;

int main() {

    int n;
    cin>>n;
    vector<int> v(n);
    int sereja=0;
    int dima=0;
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    int l=0;
    int r=n-1;
    for (int i=0; i<n; i++){
        if (i%2==0){
            if(v[r]>v[l]){
            sereja+=v[r];
            r--;
            }
            else {
            sereja+=v[l];
            l++;    
            }
        }

        else {
            if(v[r]>v[l]){
            dima+=v[r];
            r--;
            }
            else {
                dima+=v[l];
                l++;    
            }
        }
    }

    cout<<sereja<<" "<<dima<<endl;

    return 0;
} 


