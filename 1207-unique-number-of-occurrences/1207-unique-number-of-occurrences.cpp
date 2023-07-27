class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> count1;
        for(auto i: arr){
            count1[i]++;
        }
        map<int,int> count2;
        for(auto j: count1){
            count2[j.second]++;
        }
        for(auto k: count2){
            if(k.second>1){
                return false;
            }
        }
        return true;
    }
};