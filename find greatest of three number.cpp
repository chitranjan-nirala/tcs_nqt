//write a program to find the greatest of the threee number 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"greatest number is"<<a<<endl;
  }
        else if(b>a && b>c){
            cout<<"greatest number is"<<b;
        }
else
cout<<"greatest number is "<<c;
return 0;
    
}