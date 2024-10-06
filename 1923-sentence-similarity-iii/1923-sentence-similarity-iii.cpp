class Solution {
public:
      int split(const string &sentence, string words[]) {
        int word_count = 0;
        int start = 0;
        for (int i = 0; i <= sentence.size(); i++) {
            if (i == sentence.size() || sentence[i] == ' ') {
                words[word_count++] = sentence.substr(start, i - start);
                start = i + 1;
            }
        }
        return word_count;
    }
    bool areSentencesSimilar(string &sentence1, string &sentence2) {
        string words1[100], words2[100]; 
        int n1 = split(sentence1, words1);
        int n2 = split(sentence2, words2);

        int i = 0, j = 0;

        
        while (i < n1 && i < n2 && words1[i] == words2[i]) {
            i++;
        }

      
        while (j < n1 - i && j < n2 - i && words1[n1 - 1 - j] == words2[n2 - 1 - j]) {
            j++;
        }

        return i + j >= (n1 < n2 ? n1 : n2);
    }


  
};
