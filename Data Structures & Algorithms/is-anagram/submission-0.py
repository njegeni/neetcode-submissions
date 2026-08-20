class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s1 = sorted(list(s))
        t1 = sorted(list(t))
        
        if t1 == s1:
            return True
        else:
            return False