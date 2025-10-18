class Solution {
  public:
  
    int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
    int reverseExponentiation(int n) {
        // code here
        int rev = reverseNumber(n);
    long long result = 1;
    for (int i = 0; i < rev; i++) {
        result *= n;
    }
    return (int)result;
    }
    
};
