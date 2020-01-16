class Solution438 {
public:
	vector<int> findAnagrams(string s, string p) {

		int n = s.length();
		int m = p.length();//window size
		vector<int> ss(26, 0);
		vector<int> pp(26, 0);
		vector<int> a;
		for (char c : p)
			pp[c - 'a']++;//pp[x]==1
		for(int i=0;i<n;i++)
			{
				if (i >=m) ss[s[i-m] - 'a']--;//window move right, the number of letter in window left minus 1
				ss[s[i] - 'a']++;//the number of letter in window right plus 1
				if (ss == pp) a.push_back(i + 1 - m);
			}
		return a;
	}
