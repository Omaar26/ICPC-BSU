
#include <vector>
#include <iostream> 
#include <algorithm>
using namespace std;


int main (){
    freopen("scoreboard.in", "r",stdin);

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;

    string myteam;
    cin>>myteam;
    int ssize=myteam.size();
    vector<int> solved(ssize);
    for(int i=0; i<myteam.size();i++){
        solved[i]=myteam[i]-65;
    }


    vector<int> score(13);
    int max=0;
    int maxscore=0;
    for (int i=0; i<13; i++){
        cin>>score[i];
    }

    for (int i=0; i<13; i++){
        int flag=0;
        for (int j=0; j<ssize; j++){
            if(solved[j]==i){
                flag=1;
            }
        }
        if(flag==0){
         if(score[i]>=max){
          max=score[i];
          maxscore=i;
            }
        } 
    }
    
        char next=maxscore+65;
        cout<<next<<endl; 



    }

    return 0;
}

