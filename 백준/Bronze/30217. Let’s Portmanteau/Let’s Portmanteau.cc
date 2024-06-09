#include <iostream> 
#include <cstring>   
int main() {
    char word1[21], word2[21];
    std::cin >> word1 >> word2;
    
    int length1 = std::strlen(word1), length2 = std::strlen(word2);
    
    int idx1, idx2;
    for (idx1 = 1; idx1 < length1; ++idx1) {
        if (word1[idx1] == 'a' || word1[idx1] == 'e' || word1[idx1] == 'i' || word1[idx1] == 'o' || word1[idx1] == 'u') {
            break;
        }
    }
    
    for (idx2 = length2 - 2; idx2 >= 0; --idx2) {
        if (word2[idx2] == 'a' || word2[idx2] == 'e' || word2[idx2] == 'i' || word2[idx2] == 'o' || word2[idx2] == 'u') {
            break;
        }
    }
    
    if (idx2 >= 0) {
        for (int i = 0; i < idx1; ++i) std::cout << word1[i];
        for (int i = idx2; i < length2; ++i) std::cout << word2[i];
    } else if (idx2 == -1 && idx1 < length1) {
        for (int i = 0; i <= idx1; ++i) std::cout << word1[i];
        for (int i = 0; i < length2; ++i) std::cout << word2[i];
    } else {
        std::cout << word1 << 'o' << word2;
    }
    
    return 0;
}
