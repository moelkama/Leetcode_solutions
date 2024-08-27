#include <algorithm>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string nbr = std::to_string(x);
        std::string copy(nbr);
        std::reverse(copy.begin(), copy.end());
        return !nbr.compare(copy);
    }
};