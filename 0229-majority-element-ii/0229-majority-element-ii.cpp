class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0;
        int first=INT_MAX,second=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==first){
                count1++;
            }
            else if(nums[i]==second){
                count2++;
            }
            else if(count1==0){
                count1=1;
                first=nums[i];
            }
            else if(count2==0){
                count2=1;
                second=nums[i];
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1=0,count2=0;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]==first){
                count1++;
            }
            else if(nums[i]==second){
                count2++;
            }            
        }
        if(count1>len/3){
            ans.push_back(first);
        }
        if(count2>len/3){
            ans.push_back(second);
        }
        return ans;
    }
};