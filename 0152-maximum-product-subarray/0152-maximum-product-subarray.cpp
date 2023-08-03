class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1,suffix=1;
        int n=nums.size();
	    int pdt=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(prefix == 0){
	            prefix = 1;
	        }
	        if(suffix == 0){
	            suffix = 1;
	        }
	        
	        prefix *= nums[i];
	        suffix *= nums[n-i-1];
	        
	        pdt = max(pdt, max(prefix, suffix));
	    }
	    return pdt;
    }
};