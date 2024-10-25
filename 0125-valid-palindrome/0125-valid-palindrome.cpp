class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i <= j) {
           
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            
       
            if (isalnum(s[i]) != 0 && isalnum(s[j]) == 0) {
                j--;
            }
         
            else if (isalnum(s[j]) != 0 && isalnum(s[i]) == 0) {
                i++;
            }
          
            else if (isalnum(s[i]) == 0 && isalnum(s[j]) == 0) {
                i++;
                j--;
            }
           
            else if (isalnum(s[i]) != 0 && isalnum(s[j]) != 0) {
                if (s[i] != s[j]) return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
