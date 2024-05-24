//Write a Program to Count the Number of Vowels 
#include<bits/stdc++.h>
using namespace std;
int main(){
     string  str;
     cin>>str;
     int count=0;
    
         for(int i=0;str[i]!='\0';i++){
             if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
             count++;
         }
          cout<<"number of vowels : "<<count;
     return 0;
}