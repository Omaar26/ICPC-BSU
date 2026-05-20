#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){

    int t; cin>>t;

    while (t--){
        int x,y; cin>>x>>y;
        int flag=0; 
        vector<vector<char> > matrix(x, vector<char>(y)); 
        for (int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cin>>matrix[i][j];
                if(matrix[i][j]=='o'){
                  //  cout<<"this is workling";
                }
            }
        }


        // now rows 
        for (int i=0; i<x; i++){
            for(int j=0; j<y-2; j++){
             //   cout<<matrix[i][j]<<matrix[i][j+1]<<matrix[i][j+2]<<endl;
               if(matrix[i][j]=='p'){
                if(matrix[i][j+1]=='i'){
                    if(matrix[i][j+2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }

        // revrrse horizantal

         for (int i=0; i<x; i++){
            for(int j=y-1; j>=2; j--){
             //   cout<<matrix[i][j]<<matrix[i][j+1]<<matrix[i][j+2]<<endl;
               if(matrix[i][j]=='p'){
                if(matrix[i][j-1]=='i'){
                    if(matrix[i][j-2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }


       // cout<<"now colmus\n";

          for (int i=0; i<x-2; i++){
            for(int j=0; j<y; j++){
                  // cout<<matrix[i][j]<<matrix[i+1][j]<<matrix[i+2][j]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i+1][j]=='i'){
                    if(matrix[i+2][j]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }


       // cout<<"now radial\n";
    

          for (int i=0; i<x-2; i++){
            for(int j=0; j<y-2; j++){
                  //   cout<<matrix[i][j]<<matrix[i+1][j+1]<<matrix[i+2][j+2]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i+1][j+1]=='i'){
                    if(matrix[i+2][j+2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }

        // radial reverse 

         for (int i=x-1; i>=2; i--){
            for(int j=0; j<y-2; j++){
                  //   cout<<matrix[i][j]<<matrix[i+1][j+1]<<matrix[i+2][j+2]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i-1][j+1]=='i'){
                    if(matrix[i-2][j+2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }

        // radial 3 

         for (int i=x-1; i>=2; i--){
            for(int j=y-1; j>=2; j--){
                  //   cout<<matrix[i][j]<<matrix[i+1][j+1]<<matrix[i+2][j+2]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i-1][j-1]=='i'){
                    if(matrix[i-2][j-2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }

        // radial 4 
         for (int i=0; i<x-2; i++){
            for(int j=y-1; j>=2; j--){
                  //   cout<<matrix[i][j]<<matrix[i+1][j+1]<<matrix[i+2][j+2]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i+1][j-1]=='i'){
                    if(matrix[i+2][j-2]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }


        // veritcal reverse  

         for (int i=x-1; i>=2; i--){
            for(int j=0; j<y; j++){
                  //   cout<<matrix[i][j]<<matrix[i+1][j+1]<<matrix[i+2][j+2]<<endl;
              if(matrix[i][j]=='p'){
                if(matrix[i-1][j]=='i'){
                    if(matrix[i-2][j]=='e'){
                        flag=1;
                    }
                  }
               }

            }
        }


      //  cout<<flag<<endl;

        if(flag==1){
            cout<<"Cutie Pie!\n";
        }
        else {
            cout<<"Sorry Man\n";
        }






        
        
    }

    return 0;
}
