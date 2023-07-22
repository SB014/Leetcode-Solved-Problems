class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.length();
        int n2=goal.length();
        if(n1!=n2){
            return false;
        }
        else{
            string temp=s+s;
            if(temp.find(goal)<temp.length()){
                return true;
            }
            else{
                return false;
            }
        }    
    }
};