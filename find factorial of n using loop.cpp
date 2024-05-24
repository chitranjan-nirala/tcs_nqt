//Write a Program to Find the Factorial of a Number Using Loops
//#include<bits/stdc++.h>
// using namespace std;
// int fact(int n ){
//     return n*(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int  res =fact(n);
//     cout<<res;
//     return 0;
// }

//Write a Program to Find the Factorial of a Number Using Loops
#include<bits/stdc++.h>
using namespace std;
int fact(int n ){
    int ans=1;
    while(n){
         ans *=n;
         n--;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int  res =fact(n);
    cout<<res;
    return 0;
}