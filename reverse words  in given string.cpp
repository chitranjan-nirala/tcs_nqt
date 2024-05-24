 /*Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
 */

 #include <bits/stdc++.h>
 using namespace std ;
  string reverseWords(string S) 
    { 
        // code here 
       int n = S.length();
        
        reverse(S.begin(), S.end());
        int index = 0;
        for(int i = 0; i<n; i++){
            if(S[i] =='.'){
                reverse(S.begin()+index, S.begin() + i);
                index = i+1;
            }
        }
        reverse(S.begin()+index, S.begin()+n);
        
        return S;
        
    } 
 int main()
 { 
      string S;
      cin>>S;
     string res = reverseWords(S);
     cout<<res;
     return 0;
 }