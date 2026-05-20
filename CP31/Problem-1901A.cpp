#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*

        solution idea, the max distance without gas staions is the min tank size
        so you need to find the differnces between each two stations + the distance from the the start to first station
        and 2* the last distance (because you have to go back)
        
    */


    int t;
    cin>>t;
    while (t--){
        int n,x;
        cin>>n>>x;
        vector<int> gas(n+1);
        vector<int> distances(n+1);
        int diff=0;
        gas[0]=0;
        distances[0]=0;
        for (int i=0; i<n; i++){
            cin>>gas[i];
        }

        distances[0]=gas[0];

        for (int i=1; i<n; i++) {
            diff=gas[i]-gas[i-1];
            distances[i]=diff;
        }

        distances[n]=2*(x-gas[n-1]);

    sort(distances.begin(), distances.end());
        //
        // for(int i=0; i<distances.size(); i++){
        //     cout<<"dist no "<<i<<" is "<<distances[i]<<endl;
        // }

        cout<<distances[n]<<endl;


    }



    return 0;
}



