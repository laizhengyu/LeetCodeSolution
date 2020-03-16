class Solution {
public:
//too complicated 
	int lengthOfLongestSubstring(string s) {
		if (s.size() < 2) return s.size();
		unordered_set<char> str;
		
		int max_len = 0;
		int len1 = 0;
		int len2 = 0;

		for (int i = 0; i<s.size(); i++)
		{
			for (int j = i; j<s.size(); j++)
			{
				len1 = str.size();
				str.insert(s[j]);
				len2 = str.size();
				if (len1 == len2)
				{
					if (len2>max_len)
					{	
						max_len = len2;
						str.clear();
					}
					break;
				}
			}
			if (max_len < len2)
			{
				max_len = len2;
			}
			str.clear();
		}
		return max_len;
	}
};
