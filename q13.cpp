//given  n*n matrix and task is to rotate it by 90 degree clockwise 

#include<bits/stdc++.h>
using namespace std;
void rotate90clockwise(vector<vector<int>>& arr){
    int n = arr.size();
    //trtanspose the matrix
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    //reverse the matrix of each row
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            reverse(arr[i].begin(),arr[i].end());
        }
    }

}
int  main(){

int n ;
cin>>n;
vector<vector<int>> arr(n,vector<int>(n));
for(int  i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
//rotate the matrix by 90 degree clockwise 
 rotate90clockwise(arr);

for(int  i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}