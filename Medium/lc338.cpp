class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num + 1, 0);
        for (int i = 1; i <= num; ++i) {
            //res[i] =res[ left shift 1 bit ]+ the end bit(1 or 0)
            res[i] = res[i >> 1] + (i & 1);
        }
        return res;
    }

    
};
