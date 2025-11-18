class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        
        int a = 1; 
        for (int i = 0; i < n; i++) {
            answer[i] = a;
            a *= nums[i];
        }
        
        int b = 1; 
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= b;
            b *= nums[i];
        }
        
        return answer;
    }
};