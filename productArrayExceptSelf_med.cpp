#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

   vector<int> res (nums.size(),1);


   int pref =1;

   for(int i=0; i<nums.size(); i++) {
    res[i] = pref;
    pref*=nums[i];
   }

   int suf =1;

   for(int i=nums.size()-1; i>=0; i--) {
    res[i]*=suf;
    suf*=nums[i];
    
   }


    return res;
    }


int main() {
    return 0;
}