//there is sentence written in camel case. the task is to put one space after every word  and convert upper csase to lower case 
#include<iostream>
using namespace std;
string camelcaseToLowercase(const string& text){
 string res;
 for(int i  =0;i<text.size();i++){
    if(i>0&& isupper(text[i])){
        res += " ";
    }
    res += tolower(text[i]);
 }
 return res;
}
int main(){
    string str;
    cin>>str;
  string ans = camelcaseToLowercase(str);
  cout<<ans<<endl;
  return 0;
}