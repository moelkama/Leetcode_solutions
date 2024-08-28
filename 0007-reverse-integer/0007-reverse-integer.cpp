#include <iostream>
#include<algorithm>
#include<string>

class Solution {
public:
    int reverse(int x) {
        long result = 0;
        size_t pow = 1;

        int a = x;
        while (a / 10 != 0)
        {
            pow *= 10;
            a /= 10;
        }
        while (x / 10 != 0)
        {
            result += pow * (x % 10);
            pow /= 10; 
            x /= 10;
        }
        result += pow * (x % 10);
        if (result > 2147483647 || result < -2147483648)
            return 0;
        return result;
    }
};