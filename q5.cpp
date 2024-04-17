//given two  sorted  array aar1,arr2 find the union of the two array.
//union of two array defined as common and distinct element in the array.
// unoin should be in ascending order 
#include<bits/stdc++.h>
using namespace std; 
vector<int> unionOFarray(vector<int>&arr1, vector<int>&arr2){
    set<int> st;
    vector<int> ans;
    for(int i=0;i<arr1.size();i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        st.insert(arr2[i]);
    }
    for(auto it:st){
        ans.push_back(it);
    }
    return ans;
}
int main(){
    vector<int> arr1 ={1,2,3,4,6};
   vector<int> arr2 = {2,3,5};
   vector<int> res = unionOFarray(arr1,arr2);
    for(int i = 0 ;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}