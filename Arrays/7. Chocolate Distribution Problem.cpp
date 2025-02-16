class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long answer = INT_MAX;
        sort(a.begin(),a.end());
        for(long long i=0; i<n-m+1; i++)
        {
            answer = min(answer, a[i+m-1] - a[i]);
        }
        return answer;
    }   
};