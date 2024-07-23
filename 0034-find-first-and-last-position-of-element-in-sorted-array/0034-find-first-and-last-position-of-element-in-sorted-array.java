class Solution {
    public int[] searchRange(int[] nums, int target) {
        int ans[] = {-1, -1};
        
        ans[0] = search(nums, target, true);
        if (ans[0] != -1) {
            ans[1] = search(nums, target, false);
        }
        return ans;
        
    }
    public int search(int[] nums, int target, boolean searchStart){
        int ans=-1;
        int beg=0;
        int end=nums.length-1;
        
        
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(target<nums[mid]){
                 end=mid-1;
            }
            else if(target>nums[mid]){
                beg=mid+1;
            }
            else{
                ans=mid;    //probable answer
                if(searchStart){
                    end=mid-1;
                }
                else{
                    beg=mid+1;
                }
            }
        }
        return ans;
    }
}