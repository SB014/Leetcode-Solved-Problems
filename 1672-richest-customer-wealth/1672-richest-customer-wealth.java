class Solution {
    public int maximumWealth(int[][] accounts) {
        int maxWealth = Integer.MIN_VALUE;
        for(int i=0;i<accounts.length;i++){
            int total_wealth=0;
            for(int j=0;j<accounts[i].length;j++){
                total_wealth+=accounts[i][j];
            }
            maxWealth=Math.max(total_wealth,maxWealth);
        }
        return maxWealth;
    }
}