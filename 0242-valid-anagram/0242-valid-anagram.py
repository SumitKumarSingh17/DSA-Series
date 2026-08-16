class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s)!=len(t)): return False
        for x in set(s):
            if(s.count(x)!=t.count(x)): return False
        return True
        