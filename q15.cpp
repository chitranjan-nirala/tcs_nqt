//count frequency of each element 
#include<bits/stdc++.h>
using namespace std;
void  frequencyOfelement(int  arr[] , int n ){
    unordered_map<int,int> mp;
    for(int i = 0 ;i<n;i++){
        cout<<mp[arr[i]]++;
    }
     for(auto it: mp){
         cout<<it.first<<" "<<it.second<<endl;
     }
}
int  main(){
    int arr[] ={1,4,6,7,3,1,4,6,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequencyOfelement(arr, n);
    return 0;
}