class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        #Greedy ,pick 1 cookie to a child ,find the smallest cookie for the child
        g.sort()
        s.sort()
        child=0
        cookie=0
        while child< len(g) and cookie < len(s):
            if g[child]<=s[cookie]:
                child+=1
            cookie+=1
        return child
