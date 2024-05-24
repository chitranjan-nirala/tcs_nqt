// Write a Program to Remove All Characters From a String Except Alphabets
#include<bits/stdc++.h>
using namespace std;
string remove_char_exceptAlpha(string str){
    string  res =" ";
     for( char c: str){
        if(isalpha(c)){
           res +=c;
        }
     }
     return res;
}
int main(){
string str ="string@";
      string ans = remove_char_exceptAlpha(str);
      cout<<ans;
    return 0;

}