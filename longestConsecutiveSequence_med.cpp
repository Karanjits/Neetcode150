#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include<unordered_set>


using namespace std;
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(int n: s) {
            if(s.find(n-1) != s.end()) {
                int length=1;
                while(s.find(n+length)!=s.end()) {
                    length++;
                }
                longest = max(longest,length);
            }
            
        }

        return longest;
    }


    int lcs(vector<int> &arr) {

        int longest =0; 

        unordered_set<int> set(arr.begin(), arr.end());

        for(int n:set) {
            if(set.find(n-1)!= set.end()) {
                int length =1;

                while (set.find(n+length) != set.end()) {
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;

    }

int main() {
    return 0;
}
