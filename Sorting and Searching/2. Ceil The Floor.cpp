class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int floor = INT_MIN;
        int ceil = INT_MAX;
        vector<int> answer{-1,-1};
        
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]<=x && arr[i] >= floor)
            {
                floor = arr[i];
                answer[0] = floor;
            }
            
            if(arr[i]>=x && arr[i] <= ceil)
            {
                ceil = arr[i];
                answer[1] = ceil;
            }
        }
        return answer;
    }
};