class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    long a = labs(dividend), b = labs(divisor), res = 0;
    for (int i = 31; i >= 0; i--) 
        if ((a >> i) >= b) res += 1LL << i, a -= b << i;
    return (dividend > 0) ^ (divisor > 0) ? -res : res;
}
};