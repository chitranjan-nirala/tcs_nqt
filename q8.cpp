// given string s and character ch find the occurene of the character at first and last
#include<bits/stdc++.h>
using namespace std;
vector<int>findOccurence(string &s, char ch){
    int st=-1;
    int ed= -1;
    for(int i =0;i<s.size();i++){
        if(ch==s[i]&& st== -1){
            st=i;
        }
        if(ch==s[i]){
            ed=i;
        }
    }
    vector<int> ans;
    ans.push_back(st);
    ans.push_back(ed);
    return ans;
    
}
int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    vector<int> res = findOccurence(s,ch);
    cout<<res[0]<<res[1]<<endl;
}