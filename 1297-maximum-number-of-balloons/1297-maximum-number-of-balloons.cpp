class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans = INT_MAX;
        unordered_map<char, int> freq{
            {'b', 0},
            {'a', 0},
            {'l', 0},
            {'o', 0},
            {'n', 0}
        };

        for(int i =0;i<text.length();i++){
            if(freq.find(text[i])!=freq.end()){
                freq[text[i]]++;
            }
        }
        freq['l'] /= 2;
        freq['o'] /= 2;
        for(auto it : freq){
            if(it.second == 0) return 0;
            ans = min(it.second, ans);     
        }

        return ans;

    }
};