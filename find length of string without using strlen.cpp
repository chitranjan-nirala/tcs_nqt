//Write a Program to Find the Length of the String Without using strlen() Function 
#include <bits/stdc++.h>
using namespace std; 
int main(){
    
    string ch = "hello";
    int cnt =0;
   for(int i  = 0;ch[i]!='\0';i++){
       cnt ++;
   }
    cout<<cnt;
     return 0;
}