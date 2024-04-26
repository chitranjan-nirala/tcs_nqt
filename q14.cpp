//reverse the given array 
#include<bits/stdc++.h>
using namespace std;
void printarray(int ans[], int n ){

    for(int i =0;i<n;i++){
        cout<<ans[i];
    }
}
void reverse(int arr[],int n){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1]=arr[i];
    }
    printarray(ans,n);
}
int main(){
    int n =5;
    int arr[]={1,3,5,8,6};
    reverse(arr,n);
    return 0;
}