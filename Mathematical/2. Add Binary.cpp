class Solution {
public:
    string addBinary(string a, string b) {

        string answer = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            answer = to_string(sum % 2) + answer;
            carry = sum / 2;
        }
        if (carry == 1) {
            answer = "1" + answer;
        }
        return answer;
    }
};