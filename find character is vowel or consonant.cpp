//Write a Program to Check Whether a Character is a Vowel or Consonant
#include<bits/stdc++.h>
#include <cctype> 
using namespace std; 

int main(){
       char ch;
       cin>>ch;
       if(isalpha(ch)){
           if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='O'||ch=='o'||ch=='U'||ch=='u'){
                 cout<<"character is vowel :"<<ch;
           }
           else
       {
           cout<<"character is Consonant :"<<ch;
           
       }
     
       }
       else {
           cout<<"character is not an alphbet :"<<ch;
       }
        
       
       return 0;
}