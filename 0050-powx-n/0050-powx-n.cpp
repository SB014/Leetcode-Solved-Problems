class Solution {
private:
    double solve(double x, int n){
        if(n==0){
            return 1;
        }
        double smallerProb = myPow(x,abs(n)/2);
        if(n%2==0){
            return smallerProb*smallerProb;
        }
        else{
            return x*smallerProb*smallerProb;
        }
    }
public:
    double myPow(double x, int n) {
        
        double ans=solve(x,abs(n));
        if(n<0){
            return 1/ans;
        }
        else{
            return ans;
        }
    }
};