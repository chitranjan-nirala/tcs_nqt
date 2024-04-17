// given a 2d matrix consiating of 1s and 0s in that , your task is to write a program to find the row  consisting with  maximum 1s
//note: find the zero based index of the first row consisting of maximum  number of 1s and if grid consist only zero then return -1

#include<bits/stdc++.h>
using namespace std;
int rowwithMaxi1s(vector<vector<int>>arr, int n , int m ){
    int maxi= INT_MIN;
    int res= -1;
    for(int i =0;i<n;i++){
        int cnt =0;
        for(int j= 0;j<m;j++){
            if(arr[i][j]==1){
                cnt++;
            }
        }
        if(cnt!= 0 && cnt>maxi){
            res = i;
            maxi= cnt;
        }
    }
    return res;
}
 int main(){
     int n= 4, m=4;
    vector<vector<int>> arr= {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    cout<<rowwithMaxi1s(arr, n,m);
     return 0;
 }