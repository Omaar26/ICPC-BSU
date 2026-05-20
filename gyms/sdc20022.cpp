#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<long long> prime_factorization (int n) {
	
	vector<long long>pf;

	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			 n /= i;
			 pf.push_back(i);
		}
	}
	
	if (n != 1) pf.push_back(n);

	return pf;
}


int main(){
    int n;
    cin>>n;

    int dir=1;
    
    vector<vector<int>> matrix (n, vector<int>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    vector<vector<bool>> visited (n, vector<bool>(n));


    if(dir==1){    
     for(int i=0; i<n; i++){
        if ()
        visited[i][i]=1;
        visited[n-i][n-i]=1;
    }        
    }

    return 0;
}



/*


// https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define Habiba ios::sync_with_stdio(false);cin.tie(nullptr);
const int MOD = 1e9 + 7;
const int N = 1e5+ 9;
const int OO=-1;

int32_t main()
{
   Habiba
   int n; cin>>n;
   vector<vector<int>>arr(n,vector<int>(n));
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
    }
   int val2=(n*n)/2;
   int val=ceil((float)(n*n)/2);
   vector<vector<bool>>vis(n,vector<bool>(n,false));
//  row++ =>0 coulm++=>1 , row--=>2 ,coulm--=>3
int det=0;
int coulm=0,row=0;
vector<int>ans1,ans2;
ans1.push_back(arr[row][coulm]);
ans2.push_back(arr[n-1-row][n-1-coulm]);
while(val--)
{
if(det%4==0)
{
row++;
if(row>=n||coulm>=n||vis[row][coulm])
{
    det++;
    row--;
}
}
else if(det%4==1)
{
    coulm++;
if(row>=n||coulm>=n||vis[row][coulm])
{
    det++;
    coulm--;
}
}
else if(det%4==2)
{
row--;
if(row<0||coulm<0||row>=n||coulm>=n||vis[row][coulm])
{
    det++;
    row++;
}
}
else if(det%4==3)
{
coulm--;
if(row<0||coulm<0||row>=n||coulm>=n||vis[row][coulm])
{
    det++;
    coulm++;
}
}
cout<<arr[row][coulm]<<" ";
ans1.push_back(arr[row][coulm]);
ans2.push_back(arr[n-1-row][n-1-coulm]);
vis[row][coulm]=true;
vis[n-1-row][n-1-coulm]=true;
}
  return 0;
}



*/