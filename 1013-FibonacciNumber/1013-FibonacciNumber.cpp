// Last updated: 23/12/2025, 00:15:07
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }

        return fib(n-2) + fib( n-1);
    }
};