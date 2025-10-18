#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include<set>

// //nums[i]+nums[j]+nums[k] = 0 -> return all the i,j and k
using namespace std;
// vector<vector<int>> threeSum(vector<int>& nums) {

//     if(nums.size()<3) {
//         return {};
//     }
//     set<vector<int>> result; // using set to avoid duplicates
//     sort(nums.begin(),nums.end()); //sorting array to use two pointer approach

//     for(int i=0; i<nums.size()-1; i++) {
//         int left = i+1, right =nums.size()-1;
        
//         while(left<right) {
//             int sum = nums[i] + nums[left] + nums[right];

//             if(sum==0) {
//                 result.insert({nums[i],nums[left],nums[right]});
//             }else if(sum<0){
//                 left++;
//             }else{right--;
//             }
//         }
//     }
//     return vector<vector<int>>(result.begin(), result.end());

// }
vector<vector<int>> threeSum(vector<int>& arr) {
    if (arr.size() < 3) return {};

    sort(arr.begin(), arr.end());
    set<vector<int>> result; // to avoid duplicates

    for (int i = 0; i < arr.size() - 2; i++) {
        int left = i + 1;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                result.insert({arr[i], arr[left], arr[right]});
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return vector<vector<int>>(result.begin(), result.end());
}
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = threeSum(nums);

    for (auto& triplet : res) {
        cout << "[ ";
        for (int num : triplet)
            cout << num << " ";
        cout << "]\n";
    }

    return 0;
}
