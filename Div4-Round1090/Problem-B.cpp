#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int t;
    cin>>t; 
    while(t--){
      vector<int> sixsvn(7); 
      int sum=0;
      for (int i=0; i<sixsvn.size(); i++){
        cin>>sixsvn[i];
        sum+=sixsvn[i];
      }
      sort(sixsvn.begin(),sixsvn.end());
      int ans=2*sixsvn[6]-sum;
      cout<<ans<<endl;
    }

    return 0;
}