#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int wordLadders(vector<string>& words, string start, string target) {
    set<string> st(words.begin(), words.end());
    
    // If target is not in dictionary
    if (st.find(target) == st.end()) return 0;
    
    queue<pair<string, int>> q;
    q.push({start, 1});
    st.erase(start);
    
    while (!q.empty()) {
        string word = q.front().first;
        int step = q.front().second;
        q.pop();
        
        if (word == target) return step;
        
        for (int i = 0; i < word.length(); i++) {
            char original = word[i];
            
            for (char c = 'a'; c <= 'z'; c++) {
                word[i] = c;
                if (st.find(word) != st.end()) {
                    st.erase(word);
                    q.push({word, step + 1});
                }
            }
            word[i] = original;
        }
    }
    return 0; // 0 means no transformation possible
}

int main() {
    vector<string> words = {"hot", "dot", "dog", "lot", "log", "cog"};
    string start = "hit";
    string target = "log";
    cout << wordLadders(words, start, target) << endl;
    return 0;
}
