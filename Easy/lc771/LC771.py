class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        count=0
        for i in range(len(J)):
            for j in range(len(S)):
                if J[i]==S[j]:
                    count+=1
        return count       