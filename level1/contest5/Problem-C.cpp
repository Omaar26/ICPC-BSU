#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main (){

    int queue;
    cin>>queue;
    vector<long long> customerts(queue+1);
    vector<long long> prefx(queue+1);
    prefx[0]=0;
    for (long long i=1; i<queue+1; i++){
       cin>>customerts[i];
    }

    prefx[0]=0;
    for (long long j=1; j<queue+1; j++){
        prefx[j]=prefx[j-1]+customerts[j];
    }


    long long q;
    cin>>q;
    while(q--){
        long long x,y,m;
        cin>>x>>y>>m;
        long long totaldelv=y+prefx[m];
        long long totalgo=prefx[queue];
       // cout<<"total del "<<totaldelv<<endl;
        //cout<<"total go "<<totalgo<<endl;
        if (x>prefx[queue]){
            totalgo=x;
        }
        long long less=min(totaldelv,totalgo);
        cout<<less<<endl;
    }


    return 0;
}


