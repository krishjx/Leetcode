class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1 = word1.size(), n2 = word2.size();
        string s1, s2;
        int i = 0;
        while (i < max(n1, n2)) {
            if (i < n1) {
                s1 += word1[i];
            }
            if (i < n2) {
                s2 += word2[i];
            }
            i++;
        }
        if (s1 == s2) {
            return 1;
        } else {
            return 0;
        }
    }
};