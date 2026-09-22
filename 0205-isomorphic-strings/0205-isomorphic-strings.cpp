class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return 0;
        }
        vector<int> v(200, 1000), b(200, 1000);
        for (int i = 0; i < t.size(); i++) {
            int idx = (int)s[i];

            if (v[idx] == 1000) {
                v[idx] = s[i] - t[i];
            } else {
                if (v[idx] != (s[i] - t[i])) {
                    return 0;
                }
            }
        }
        for (int i = 0; i < t.size(); i++) {
            int idx = (int)t[i];

            if (b[idx] == 1000) {
                b[idx] = t[i] - s[i];
            } else {
                if (b[idx] != (t[i] - s[i])) {
                    return 0;
                }
            }
        }
        return 1;
    }
};