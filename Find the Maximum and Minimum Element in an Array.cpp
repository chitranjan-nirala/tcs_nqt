// Find the Maximum and Minimum Element in an Array:
#include<bits/stdc++.h>
#include <climits> 
using namespace std;
void find_min_max(int arr[], int n ){
     int min = INT_MAX;
    int max = INT_MIN;
     for(int i=0; i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
     if(arr[i] > max){
            max = arr[i];
        }
     }
     cout<<"min"<<":"<<min<<" "<<"max"<<":"<<max;
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
  find_min_max(arr,n);
    return 0;
}