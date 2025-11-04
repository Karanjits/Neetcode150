#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;


    bool isV(string s) {
        
        stack<char> compare;
        char someChar;
        for(int i=0; i<s.size(); i++) {
            char c = s[i];

            if(c == '{'  || c=='[' || c=='(' ) {
                compare.push(c);
            }else {

                if(!compare.empty()) {
                    someChar= compare.top();
                    compare.pop();
                    
                }

                if((c == '}' && someChar == '{') || (someChar== '[' && c == ']') || (someChar == '(' && c==')') ) {
                    continue;
                }else{return false;}
            }
        }
    
    return compare.empty();
}

        





int main() {
    return 0;
}