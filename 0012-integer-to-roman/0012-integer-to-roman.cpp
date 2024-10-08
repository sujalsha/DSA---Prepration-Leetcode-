class Solution {
public:
    string intToRoman(int num) {
        map<int, string> ans = {
            {1000, "M"},
            {900,  "CM"},
            {500,  "D"},
            {400,  "CD"},
            {100,  "C"},
            {90,   "XC"},
            {50,   "L"},
            {40,   "XL"},
            {10,   "X"},
            {9,    "IX"},
            {5,    "V"},
            {4,    "IV"},
            {1,    "I"}
        };

        string res = "";
        for (auto i = ans.rbegin(); i != ans.rend(); ++i) {
            int a = i->first;
            string b = i->second;
            while (num >= a) {
                res += b;
                num -= a;
            }
        }
        return res;
    }
};