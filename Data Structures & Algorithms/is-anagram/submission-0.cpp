class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> first_string;        

        for (int i = 0; i < s.length(); i++) {
            first_string[s[i]]++;
        }

        for (int j = 0; j < t.length(); j++) {
            if(first_string.find(t[j]) != first_string.end()) {
                first_string[t[j]]--;
            } else {
                return false;
            }

            if (first_string[t[j]] == 0) {
                first_string.erase(t[j]);
            }
        }

        if (first_string.size() == 0) {
            return true;
        }
        return false;
    }
};
