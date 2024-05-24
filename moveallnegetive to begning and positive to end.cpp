// move all negative number tin the beginning and positive number at the end  
#include<bits/stdc++.h>
using namespace std; 
void NegetiveTOpositive(int arr[], int n ){
    int left =0, right= n-1;
   while (left <= right) {
        // Move left pointer to the right until it finds a positive number
        while (arr[left] < 0 && left <= right) {
            left++;
        }
        // Move right pointer to the left until it finds a negative number
        while (arr[right] >= 0 && left <= right) {
            right--;
        }
        // Swap the elements at left and right pointers
        if (left <= right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NegetiveTOpositive(arr,n);
    for(int  i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}