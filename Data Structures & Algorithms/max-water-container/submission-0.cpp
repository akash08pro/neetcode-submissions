class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int left = 0;
        int right = heights.size() - 1;
        while (left < right) {
            
            maxA = max(((right - left) * min(heights[left], heights[right])), maxA);
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxA;
    }
};
