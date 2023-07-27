class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto it: strs){
            string s=it;
            sort(s.begin(),s.end());
            mp[s].push_back(it);
        }
        vector<vector<string>> ans(mp.size());
        int index=0;
        for(auto j: mp){
            auto AnagVec= j.second;
            for(int i=0;i<AnagVec.size();i++){
                ans[index].push_back(AnagVec[i]);
            }
            index++;
        }
        return ans;
    }
};