#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int count=0;
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
        vector<int> b(m);
    for (int i=0; i<m; i++){
        cin>>b[i];
    }

    int u=0;
    int d=0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
while (d<m){
    if(b[d]<(a[u]-k)){
        d++;
    }
    else if (b[d]>(a[u]+k)) {
        u++;
    }
    else {
        u++;
        d++;
        count++;
    }
}

    cout<<count<<endl;

    return 0;
} 