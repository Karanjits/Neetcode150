#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool hasDuplicate(vector<int>& nums) {
    unordered_map<int, int> seen;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true; // found a duplicate
        }
        seen[num] = num; // mark as seen
    }
    return false;
}

int main() {
    vector<int> nums = {1,2, 2, 3, 4};

    bool hasDup = hasDuplicate(nums);

    if (hasDup) {
        cout << "ARRAY HAS DUPLICATES\n";
    } else {
        cout << "NO DUPLICATES\n";
    }
    return 0;
}
