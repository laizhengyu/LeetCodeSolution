//recursion
//Runtime:  faster than 26.69% 
//Memory Usage:  less than 100%
class Solution {
public:
    int fib(int N) {
        if (N==0) return 0;
        if (N==1) return 1;
        return fib(N-1)+fib(N-2);
    }
};


//dynamic programing
//Runtime: 4 ms, faster than 67.03% 
//Memory Usage: 8.3 MB, less than 86.57%
class Solution {
public:
    int fib(int N) {
      
        if (N==0) return 0;
        if (N==1) return 1;
        
        int dp[N+1];
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=N;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[N];
    }
};
