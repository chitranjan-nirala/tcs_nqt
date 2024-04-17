//given two string s1,s2 and you have to find the sum of the  occurences of string s2 in string s1 
#include<iostream>
#include<unordered_map>
using namespace std;
int sumofOccurence(string s1, string s2){
    int sum =0;
    unordered_map<char,int> mp;
    for(int i =0;i<s1.size();i++){
        mp[s1[i]]++;
    }
    for(int i= 0;i<s2.size();i++){
        sum+= mp[s2[i]];
    }
    return sum;
}
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int res = sumofOccurence(s1,s2);
    cout<<res<<endl;
    return 0;
    
}