class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n  = nums.size();
        k = k%n;
        vector<int> temp;

         // step1: temp array me last k values store karlo
        for(int i=n-k; i<n; i++ ){
            int value = nums[i];
            temp.push_back(value);
        }

       // step2: shift loop
        for(int i=n-1; i>=0; i--){
            if(i-k>=0){
                nums[i] = nums[i-k];

            }
        }
        // step3: copy from temp array
        for(int i=0; i<k; i++){
            nums[i] = temp[i];
        }
    }
};


