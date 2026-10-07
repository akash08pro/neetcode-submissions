class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded_value;
        int i = 0;
        
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1; // '#' ke aage move karein
            
            decoded_value.push_back(s.substr(i, length));
            i += length; // agle word ke start par jump karein
        }
        
        return decoded_value;
    }
};