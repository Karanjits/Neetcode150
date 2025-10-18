#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

//corrected
 vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> res;
    int toT=0, left =0, right = numbers.size()-1;

    while(left<right) {
        toT = numbers[left] + numbers[right];
        if(toT>target) {
            right--;
        }else if(toT<target) {
            left++;
        }else{
            res.push_back (left+1);
            res.push_back(right+1);
            break;
        }
    }

    return res;
    }



int main() {
    vector<vector<int>> testArrays = {
        {1, 2, 3, 4},
        {2, 7, 11, 15},
        {-3, -1, 0, 2, 4, 5},
        {1, 3, 4, 5, 7, 10, 11},
        {0, 0, 3, 4}
    };

    vector<int> targets = {3, 9, 1, 15, 0};

    for (int i = 0; i < testArrays.size(); i++) {
        cout << "Test case " << i + 1 << ":\n";
        cout << "numbers = [ ";
        for (int num : testArrays[i]) cout << num << " ";
        cout << "], target = " << targets[i] << "\n";

        // Call your twoSum function here
        vector<int> result = twoSum(testArrays[i], targets[i]);
        cout << "Output: [" << result[0] << ", " << result[1] << "]\n\n";
    }

    return 0;
}
