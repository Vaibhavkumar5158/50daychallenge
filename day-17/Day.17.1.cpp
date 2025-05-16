class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        // let find out pairs
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++ ){
                int first = nums[i];
                int second  = nums[j];
                int sum = first + second;
                if(sum == target){
                    return{i, j};
                }
                
            }
        } // return empty arr
        return {};
      
    }        
         
};


// agar empty arr return karna hai to  arr ki copy banane ki koi jarurat nahi hai

// 10 may se khud se ques kia phela