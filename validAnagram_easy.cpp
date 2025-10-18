#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


bool isAnagram(string s, string t) {

    unordered_map<char, int> freq;
    for(char c:s) {
        freq[c]++;
    }

    for(char c: t) {
        freq[c]--;
    }


    for(auto &p : freq) {
        if(p.second !=0) {
            return false;
        }
    }


    return true;
}


int main() {


    return 0;
} 