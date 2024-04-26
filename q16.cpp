//input : ['apple', 1.0, 5], ['orange', 10.0,5],['apple', 10.0,5]
//output: [ 5+50+50]/3 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  rates =0;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        double d;
        cin>>d;
        int a;
        cin>>a;
        rates+=d*a;
    }
      int avg = rates/n;
      cout<<avg<<endl;
      return 0;
}