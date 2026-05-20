#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<long long>> countFreq(vector<long long> &arr){
    int n = arr.size();
    
    // Sort array for binary search
    sort(arr.begin(), arr.end()); 
    vector<vector<long long>> ans;
    for (int i = 0; i < n; i++) {
        
        // Find first and last occurrence of arr[i]
        // using lower and upper bound 
        auto firstIter = lower_bound(arr.begin(), arr.end(), arr[i]);
        auto lastIter = upper_bound(arr.begin(), arr.end(), arr[i]);
        int firstIndex = firstIter - arr.begin();
        int lastIndex = lastIter - arr.begin() - 1;
        
        // Calculate frequency
        int fre = lastIndex - firstIndex + 1; 
        ans.push_back({arr[i], fre}); 
        
        // Skip counted elements
        i = lastIndex; 
    }
    return ans;
}

long long powMod(long long x, long long n, long long M) {
    long long res = 1;

    // Loop until exponent becomes 0
    while(n >= 1) {
        
        // n is odd, multiply result by current x and take modulo
        if(n & 1) {
            res = (res * x) % M;
            
            // Reduce exponent by 1 to make it even
            n--;  
        }
        
        // n is even, square the base and halve the exponent
        else {
            x = (x * x) % M;
            n /= 2;
        }
    }
    return res;
}

int main(){
    int size;
    cin>>size;
    long long total=0;
    long long mod =1e9+7;
    vector<long long> arr(size);
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }
    
    vector<vector<long long>> ans = countFreq(arr);
    for (auto x : ans){
        if(x[1]==1){
            total++;
        }
        else if(x[1]>1){
            total+= powMod(2,x[1],mod);
        }
    }

     cout<<(total)<<endl;

    return 0;
}

