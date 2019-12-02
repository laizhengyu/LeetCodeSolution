class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        //do not sort them in A.size, time is more than O(n2)
       //using more space to reduce  time 
        int len=A.size();
        vector<int> B(len,0);
        int i=0,j=len-1;
        int r,l;
        for (int k=len-1;k>=0;k--)
        {
            r=pow(A[j],2);
            l=pow(A[i],2);
            if (r>l)
            {
                B[k]=r;j--;
            }
            else {
                B[k]=l;i++;
            }
        }
        return B;
    }
};
