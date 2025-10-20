#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

int lengthOfLongestSubstring(string s) {
        int leftB=0,len=0;
        unordered_map<char,int> map;
        for(int i=0; i<s.size(); i++) {
            if(map.find(s[i]) != map.end()) {
                map[i] = s[i];
                
            }else {
                leftB=i;
                map.clear();
                map[i]=s[i];
            }
            len = max((i-leftB)+1,len);
        }
    }
int main() {
    return 0;
}