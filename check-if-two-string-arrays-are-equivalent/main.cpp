// По скорости O(n1 + n2) где n1 - это сумма всех элемантов в строках, word2 по аналогии
// По памяти O(1)

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      int index_word1 = 0, index_word2 = 0;
      int jndex_word1 = 0, jndex_word2 = 0;
  
      while (index_word1 < word1.size() && index_word2 < word1.size()
          &&
          jndex_word1 < word1[index_word1].size() && index_word2 < word2[index_word2].size()) {
          if (word1[index_word1][jndex_word1] != word2[index_word2][jndex_word2]) {
              return false;
          }
  
          if (++jndex_word1 == word1[index_word1].size()) {
              ++index_word1;
  
              jndex_word1 = 0;
          }
          if (++jndex_word2 == word2[index_word2].size()) {
              ++index_word2;
  
              jndex_word2 = 0;
          }
      }
  
      return true;
  }
};
