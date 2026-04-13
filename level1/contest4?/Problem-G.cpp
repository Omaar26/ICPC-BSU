#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


int main (){

    int t;
    cin>>t;
    while(t--){
    int r,e,c;
    cin>>r>>e>>c;
    int totaladv=e-c;
    if(totaladv>r){
        cout<<"advertise"<<endl;
    }
   else if (totaladv<r){
        cout<<"do not advertise"<<endl;
    }
    else {
        cout<<"does not matter"<<endl;
    }
        
    }

    return 0;
}


