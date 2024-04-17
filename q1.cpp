// write a program to  calculate the factorial of the number without using multilplication  and division operator
#include<iostream>
using namespace std;
int factorial(int n){
    int ans = n;
    //outer loop
    for(int i=n-1;i>0;i--){
        int sum = 0;
        //inner loop
        for(int j=0;j<i;j++){
            sum = sum +ans;
        }
         ans = sum ;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int res = factorial(n);
    cout<<res<<endl;
   return 0;
} 