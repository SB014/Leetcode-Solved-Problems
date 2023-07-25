class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid;
        while(s<e){
            mid = s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                //mid lies in increasing line
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return e;
    }
};