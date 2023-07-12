class Solution {
    bool isEqual(int a1[26],int b1[26]){
        for(int i=0;i<26;i++){
            if(a1[i]!=b1[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }
        
        int i=0;
        int count2[26]={0};
        while(i<s1.length() && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        
        if(isEqual(count1,count2)){
            return 1;
        }
        
        while(i<s2.length()){
            int index =s2[i]-'a';
            count2[index]++;
            
            int ch = i-s1.length();
            index = s2[ch]-'a';
            count2[index]--;
            
            i++;
            if(isEqual(count1,count2)){
                return 1;
            }
        }
        return 0;
    }
};