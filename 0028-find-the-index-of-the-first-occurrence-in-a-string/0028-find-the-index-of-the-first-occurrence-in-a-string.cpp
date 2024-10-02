class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        while (haystack[i])
        {
            j = 0;
            while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
                j++;
            if (!needle[j])
                return i;
            i++;
        }
        return -1;
    }
};