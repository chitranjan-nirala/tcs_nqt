//Given a number, check whether it is even or odd.
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even number";
    }
    else if(n%3==0){
        cout<<"odd number";
    }
    return 0;
}
