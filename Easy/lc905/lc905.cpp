class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
       int temp;
        
        for (int i=0,j=0;i<A.size();i++)
       {
           if (A[i]%2==0)
           {
               temp=A[i];
               A[i]=A[j];
               A[j]=temp;
               j++;
           }
       }
        return A;
    }
};