#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
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

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    for (int n : result) {
        cout << n << " ";
    }

    return 0;
}
