class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int right = 0;
        int left = numbers.size() - 1;
        while (right < left) {
            if (numbers[right] + numbers[left] == target) {
                res.push_back(right+1);
                res.push_back(left+1);
                return res;
            } else if (numbers[right] + numbers[left] > target) {
                left--;
            } else {
                right++;
            }
        }

        return res;
    }
};
