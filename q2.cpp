// write a progrma to  calculate the pair count  in the given array such that the sum of the  pair is divisible  by 2
// remove the dupplicate value 
#include<iostream>
#include<map>
using namespace std;
int countPair(int arr[] , int n ){
    int cnt = 0;
    map<pair<int ,int>, bool> mp;//handle the duplicate 
 for(int  i = 0 ;i<n-1;i++){
    for(int j = i+1;j <n;j++){
        int a  = arr[i];
        int b = arr[j];
        int c = a+b;
        pair<int,int>p = make_pair(a,b);
        if(c % 2 == 0 && mp[p]!= true){
             cnt++;
             mp[p] = true;
        }
    }
 }
 return cnt;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int res =  countPair(arr, n );
    cout<<res<<endl;
    return 0;
}