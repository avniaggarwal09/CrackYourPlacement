class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        while(columnNumber > 0)
        {
            --columnNumber;
            int d = columnNumber % 26;
            columnNumber /= 26;
            answer += 'A' + d;            
        }
        reverse(answer.begin(),answer.end());
        return answer; 
    }
};