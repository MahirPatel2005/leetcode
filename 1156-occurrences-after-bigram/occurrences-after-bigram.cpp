#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words;
        vector<string> result;
        string temp;
        istringstream iss(text);
        while (iss >> temp) {
            words.push_back(temp);
        }
        if (words.size() < 3) return {};

        for (int i = 0; i < words.size() - 2; ++i) {
            if (words[i] == first && words[i + 1] == second) {
                result.push_back(words[i + 2]);
            }
        }
        
        return result;
    }
};
