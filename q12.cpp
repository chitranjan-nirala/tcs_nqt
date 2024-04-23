//find uncommon string 
#include <iostream>
#include <string>
#include<set>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    set<char> st;
    for(auto i:b){
        st.insert(i);
    }
    string c ="";
    for(auto i:a){
        if(st.find(i)==st.end()){
            c+=i;
        }
    }
    cout<<c<<endl;
    return 0;
    
}