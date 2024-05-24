// write as program to remove vowel from the string 
#include<bits/stdc++.h>
using namespace std;
 bool isVowel(char str){
     return  str=='A'||str=='a'||str=='E'||str=='e'||str=='I'||str=='i'||str=='O'||str=='o'||str=='U'||str=='u';
 }
 
  string removeVowel(string st){
     string  res= "";
      for( char str :st){
       if(!isVowel(str)){
           res +=str;
       }
          
      }
     return res;
      
  }
int main(){
    
  string input;
  cin>>input;
  string output = removeVowel(input);
  cout<<"output is "<<output;
  return 0;
}