#include <vector>
#include <iostream> 
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> &arr, int n, int x){
    int l=0;
    int h=n-1;
    while (l<h){
            int mid=(l+h)/2;
        if (arr[mid]>=x){
           h=mid;
        }
        else {
            l=mid+1;
        }
    }
        return -1;
} 


int main (){

    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i=0; i<n; i++){
        cin>>a[i];
    } 


    for (int i=0; i<m; i++){
        cin>>b[i];
    }

  for (int i=0; i<m; i++){
    int count =0;
    for (int j=0; j<n; j++){
        if(b[i]>=a[j]){
            count++;
        }
    }
    cout<<count<<" ";
  }

    return 0;
}
