#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

bool isPalindrome(string s) {
    int start =1, end = s.size()-1, count =0 ;

    while(start<end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    } 

    return true;
}

int main() {

cout << isPalindrome("racecar"); // true
cout << isPalindrome("hello"); 
    return 0;
}
