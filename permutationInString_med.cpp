#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;


bool checkInclusion(string s1, string s2) {

if(s1.empty() || s2.size() < s1.size()) {
    return false;
}

unordered_map<char, int> freqMap(26);

for(char s: s1) {
    freqMap[s]++;
}
int left=0 , n=s1.size();
unordered_map <char, int> winF;
for(int i=0; i<s2.size(); i++) {
    winF[s2[i]]++;
    if(i-left+1 >n) {
        winF[s2[i]]--;
        left++;
    }

    if(i-left+1 ==n) {
        if(winF == freqMap) {
            return true;
        }
    }
}

return false;
}



bool cI (string s1, string s2) {

    vector<int> fFr(26,0);  
    vector<int> sFr(26,0);  

    for(int i=0; i<s1.size(); i++) {
        fFr[s1[i] - 'a']++;
    }

    int left =0, n=s1.size();

    for(int right =0; right<n ; right++) {
        s2[s2[right] - 'a']++;

        if( right - left +1 >n) {
            s2[s2[left- 'a']]--;
            left++;
        }

        if(right - left+1 == n) {
            if(fFr == sFr) {
                return true;
            }
        }
    }

    return true;
}

int main() {
    return 0;
}
