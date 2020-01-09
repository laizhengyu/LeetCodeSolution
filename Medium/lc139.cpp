class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
    
		//Using Dynamic Programming
		//dp.size()=s.size()+1, because we need consider empty part
		//dp[i]=dp[j]&& dict.find(s.substr(j,i-j)),j<i
		//dp[i]=true means s[0...j-1] can be broken and s[j...i] can be found in dict(thun: !=end)
		int n = s.size();
		vector<bool> dp(n + 1, false);
		unordered_set<string> dict(wordDict.begin(), wordDict.end());//hashmap
		dp[0] = true;
		for (int i = 1; i < n+1; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end())
				{
					dp[i] = true;
					break;
				}
			}
		}
		return dp[n];
    }
};
