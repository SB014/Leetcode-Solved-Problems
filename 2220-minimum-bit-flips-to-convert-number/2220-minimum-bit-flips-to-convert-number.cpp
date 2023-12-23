class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int val = start^goal;
        int mask = 1;
        while(val!=0){
            count += val & mask;
            val = val>>1;
        }
        return count;
    }
};