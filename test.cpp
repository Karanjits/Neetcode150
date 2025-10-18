#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;

    // Step 1: count frequencies
    for (auto &num : nums) {
        freqMap[num]++;
    }

    // Step 2: bucket by frequency
    vector<vector<int>> bucket(nums.size() + 1);
    for (auto &entry : freqMap) {
        int num = entry.first;
        int freq = entry.second;
        bucket[freq].push_back(num);
    }

    // Step 3: collect top k
    vector<int> res;
    int current = 0;

    for (int i = bucket.size() - 1; i >= 0 && current < k; i--) {
        if (!bucket[i].empty()) {
            for (auto &num : bucket[i]) {
                res.push_back(num);
                current++;
                if (current == k) break;
            }
        }
    }

    return res;
}

//test = [hello,olleh,mate,gate] -> res=[[hello,olleh],[mate,gate]]
vector<vector<string>> groupAnagrams(vector<string>& strs) {

    vector<vector<string>> result;

    unordered_map<string,vector<string>> map;

    for(int i=0; i<strs.size();i++) {
        vector<int> freq(26,0);
        int counter=0;
        for(auto& c:strs[i]) {
            freq[c-'a']++;
        }


        string key;

        for(int c:freq) {
            key += to_string(c) + "#";
            
        }
        
        

        map[key].push_back(strs[i]);

    }

    for(auto& t: map) {
        result.push_back(t.second);      
    }
    return result;
}

int main() {
    vector<int> nums={1,2,3,5,3,2,9,1,0};
    unordered_set<int> s(nums.begin(), nums.end());


    for(auto itr=s.begin(); itr!=s.end();++itr) {
        cout<<*itr<<endl;
    }



    
    return 0;
}
