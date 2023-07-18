class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                 st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            char ch= st.top();
            ans+=ch;
            st.pop();
        }
        
        //obtained string is reversed(as the element added last in a stack is taken out first)
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};