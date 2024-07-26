class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        vector<long long int> P(n); 
        long leftProduct = 1;
        
        for (int index = 0; index < n; ++index) {
            P[index] = leftProduct;  
            leftProduct *= nums[index];  
        }
      
        long rightProduct = 1;
        
        for (int index = n - 1; index >= 0; --index) {
            P[index] *= rightProduct; 
            rightProduct *= nums[index];   
        }
      
        return P;
    }
};