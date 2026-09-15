class Solution {
public:

    string encode(vector<string>& strs) {
        string encode_string;
        for(auto s : strs) {
            encode_string += to_string(s.length()) + "_" + s;
        }
        return encode_string;
    }

    vector<string> decode(string s) {
        // int temp = 0;
        // string temp_str;
        // vector<string> new_one;

        // for(int k = 0; k < s.length(); k++) {
        //     if(s[k] == '_') {
        //         for (int i = k + 1, count = 0; count < temp; i++, count++) {
        //             temp_str += s[i];
        //             k = i - 1;
        //         }
        //         new_one.push_back(temp_str);
        //         temp = 0;
        //         temp_str = "";
        //     } else {
        //         temp = temp * 10 + (s[k] - '0');
        //     }
        // }

        // return new_one;

        vector<string> result;
        int k = 0;

        while (k < s.length()) {
            int length = 0;

            while (s[k] != '_') {
                length = length * 10 + (s[k] - '0');
                k++;
            }
            k++;

            string temp;
            for (int i = 0; i < length; i++) {
                temp += s[k];
                k++;
            }

            result.push_back(temp);
        }

        return result;
    }
};
