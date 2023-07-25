//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
        stack<char> st;
        int n = s.length();
        if(n%2!=0) return -1;
        int cOp=0,cCl=0;
        for(int i=0;i<n;i++){
            if(s[i]=='{'){
                //stack might or might not be empty, but our character is '{',so increase count of it
                st.push(s[i]);
                cOp++;
            }
            else if(s[i]=='}' && !st.empty() && st.top()=='{'){
                //stack has a already present '{' on st.top and now on encountering '}'. we ended up balancing a pair. In this case, '}' did not enter stack, so no increase in its count. But on balancing out, a '{' ended up getting eliminated from stack, so reduce its count
                st.pop();
                cOp--;
            }
            else{
                //stack may or maynot be empty, but it definitely does NOT contain a '{'(otherwise it would have been balanced), so only a '}' is increased in count
                cCl++;
            }    
            
        }
        if(cOp%2==0){
            cOp=cOp/2;
        }
        else{
            cOp=cOp/2 + 1;
        }
        if(cCl%2==0){
            cCl=cCl/2;
        }
        else{
            cCl=cCl/2 + 1;
        }
        return cOp+cCl;
}