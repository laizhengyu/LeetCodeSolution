//Runtime: 200 ms, faster than 15.72%
//Memory Usage: 17.7 MB, less than 100.00% 
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        string word;
        string  temp1=chars;
        sort(temp1.begin(),temp1.end());
        int count=0;
        for (int i=0;i<words.size();i++)
        {
            word=words[i];
            sort(word.begin(),word.end());
            string temp2=temp1;
           int len=0;
            for (int k=0;k<word.size();k++)
            {         
                 for (int j=0;j<temp2.size();j++)
                 {
                     if(word[k]==temp2[j])
                     {   
                         len++;
                         temp2.erase(j,1);//delete temp2[j]
                         break;           //next letter
                     }                    
                 }       
            }
            if (len==word.size()) count+=len;// all letter are found
        }
        
        return count;
    }
};
