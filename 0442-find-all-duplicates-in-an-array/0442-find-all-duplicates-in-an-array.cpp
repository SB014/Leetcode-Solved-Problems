class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> count1;
        for(auto i: nums){
            count1[i]++;
        }
        vector<int> ans;
        for(auto j: count1){
            if(j.second==2){
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};