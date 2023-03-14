class Solution {
private:
    bool alphanumeric(char ch){
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return true;
        }
        return false;
    }
    char convLowercase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        
        //if valid character
        for(int i=0;i<s.size();i++){
            if(alphanumeric(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        //converting to lowercase
        for(int i=0;i<temp.size();i++){
            temp[i]=convLowercase(temp[i]);
        }
        
        //checkPalindrome
        return checkPalindrome(temp);
    }
};