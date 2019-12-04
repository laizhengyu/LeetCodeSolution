class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> B(A.size());
        for (int i=0,j=1,k=0;k<A.size();k++)
        {
            if (A[k]%2==0)
            {
                B[i]=A[k];
                i+=2;
            }
            else {
                B[j]=A[k];
                j+=2;
            }
        }
        return B;
    }
};
