class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if(len(s) != len(t)):
            return False
        a="".join(sorted(s))
        b="".join(sorted(t))
        return a==b
        