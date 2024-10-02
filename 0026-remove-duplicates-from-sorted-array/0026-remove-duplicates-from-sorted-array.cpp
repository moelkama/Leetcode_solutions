class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it = nums.begin();
        while (it != nums.end()) {
            if (it + 1 != nums.end() && *it == *(it + 1))
                nums.erase(it);
            else
                it++;
        }
        return nums.size();
    }
};