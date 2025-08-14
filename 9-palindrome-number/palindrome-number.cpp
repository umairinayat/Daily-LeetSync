class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long org = x;
        long dig=0;
        while(x!=0){
            int digit = x %10;
            dig = dig *10 + digit;
            x/=10;
        }

        return (dig == org);
    }
};