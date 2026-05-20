#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    int x;
    cin>>x;
    int y;
    cin>>y;
    int pref[x+1];
    int houses[x];
    pref[0]=0;
    for (int i=0; i<x; i++){
        cin>>houses[i];
        pref[i+1]=pref[i]+houses[i];
    }

    if(pref[x]==y){
        cout<<x<<endl;
    }
    if (pref[x]<y){
        cout<<-1<<endl;
    }
    else {
    
        int idk=0;
        int flag=0;
        long long mindist=2e10;
        for(int i=1; i<=x; i++){
            while(pref[i]-pref[idk]>=y){
                long long dist=i-idk;
                mindist=min(mindist,dist);
                idk++;
                flag=1;
            }
        }
        
    
    
        cout<<mindist<<endl;

    }


    return 0;
}