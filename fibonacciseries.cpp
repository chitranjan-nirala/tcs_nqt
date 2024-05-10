//Given a number n, print n-th Fibonacci Number. 
//fibno =  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
// fib{n}=  fib(n-1)+fib(n-2)
// #include<iostream>
// using namespace std;
// int fib(int n){
//  if(n==0||n==1){
//     return n;
//  }
//  else return fib(n-1)+ fib(n-2);
// }
// int main(){
//     int  n; 
//     cin>>n;
//   int res = fib(n);
//   cout<<res;
//   return 0;
// }

/* printy nth fibonacci number using  dynamic programing */
#include<bits/stdc++.h>
using namespace std;
class fibonacci{
public:
int fib(int n ){
         //store fib no 
        int f[n+2];
       f[0]=0;
      f[1]=1;
        for(int i =2;i<=n;i++){
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
}
};
int main(){
    fibonacci obj;
    int n;
    cin>>n;
    cout<<obj.fib(n);
    return 0;
}