class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1, count=0;
        while(s[i]==' '){
            i--;
        }
        while(i>=0){
            if(s[i]!=' '){
                count++;
            }
            else if(s[i]==' '){
                break;
            }
            i--;
        }
        return count;
    }
};
