#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool vaidAnagram(string s, string t) {
    if (s.size() != t.size()) return false; // early check

    vector<int> freqChars(26, 0);

    for (char c : s) {
        freqChars[c - 'a']++;
    }

    for (char c : t) {
        freqChars[c - 'a']--;
    }

    for (int count : freqChars) {
        if (count != 0) {
            return false;
        }
    }

    return true;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> map;

   

    for(string word:strs) {
        vector<int> freq (26,0);

        for(char c: word) {
            freq[c-'a']++;
        }
        string key;
        for(int count: freq) {
            key+= count;
        }

        map[key].push_back(word);
    }

vector<vector<string>>result;
    for(auto &entry: map) {
        result.push_back(entry.second);
    }

    return result;
}


int main() {

 
    vector<string> test = {"hlo", "buffalo", "elloh", "lloeh","new","ew"};

    vector<vector<string>> testRes = groupAnagrams(test);

 for (int i = 0; i < testRes.size(); i++) {
    cout << "Group " << i+1 << ": ";
    for (int j = 0; j < testRes[i].size(); j++) {
        cout << testRes[i][j] << " ";
    }
    cout << endl;
}


    
    
    return 0;
}