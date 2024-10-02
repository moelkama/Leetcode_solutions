class Solution {
public:
    vector<int> plus(vector<int>& digits, int idx)
    {
        if (digits[idx] == 9)
        {
            digits[idx] = 0;
            if (idx + 1 >= 2)
                return this->plus(digits, idx - 1);
            else
                digits.insert(digits.begin(), 1);
        }
        else
            digits[idx]++;
        return digits;
    }
    vector<int> plusOne(vector<int>& digits) {
        return this->plus(digits, digits.size() - 1);
    }
};