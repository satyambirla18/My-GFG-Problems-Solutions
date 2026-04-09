class Solution {
public:
    string caseSort(string& s) {
        vector<char> lower, upper;

        for (char c : s) {
            if (islower(c)) lower.push_back(c);
            else upper.push_back(c);
        }

        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        int i = 0, j = 0;

        for (int k = 0; k < s.size(); k++) {
            if (islower(s[k])) {
                s[k] = lower[i++];
            } else {
                s[k] = upper[j++];
            }
        }

        return s;
    }
};