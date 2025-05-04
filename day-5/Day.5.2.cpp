class Solution {
    public:
        bool isPerfectSquare(int num) {
            int s = 0;
            if(num==1) return true;
            int e=num/2;
            while(s<=e){
                long long int mid = s+(e-s)/2;
                if(mid*mid==num) return true;
                else if (mid*mid>num) e=mid-1;
                else s=mid+1;
            }
            return false;
        }
    };