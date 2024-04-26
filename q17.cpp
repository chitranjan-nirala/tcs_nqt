//find the sum of cube of the number 
//i/p: n =2, m=5;
//o/p: 2^3+3^3+4^3+5^3=
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 2,m=5;
    int sum=0;
    for(int i =n;i<=m;i++){
        sum+= pow(i,3);
    }
    cout<<sum<<""<<endl;
    return 0;
}