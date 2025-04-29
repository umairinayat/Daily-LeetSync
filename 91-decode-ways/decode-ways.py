class Solution(object):
    def numDecodings(self, s):
        """
        :type s: str
        :rtype: int
        """
        

        if not s or s[0] == '0':
            return 0
        
        n = len(s)
        dp = [0] * (n+1)

        dp[0] = 1
        dp[1 ]= 1


    
        for i in range(2, n + 1):
            # One-digit check (valid if not '0')
            if s[i - 1] != '0':
                dp[i] += dp[i - 1]
            
            # Two-digit check (between "10" and "26")
            two_digit = int(s[i - 2:i])
            if 10 <= two_digit <= 26:
                dp[i] += dp[i - 2]
    
        return dp[n]