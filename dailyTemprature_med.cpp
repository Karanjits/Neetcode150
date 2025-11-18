#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemp(vector<int> & temps) {
    stack<int> counterStack;
    vector<int> result(temps.size(),0);

    for(int i=0; i<temps.size(); ++i) {


       while(!counterStack.empty() && temps[i] > temps[counterStack.top()] ) {
        int days = i - counterStack.top();
        
        result[counterStack.top()] = days; 

        counterStack.pop();
        
       }
       counterStack.push(i);

}

       return result;
}

int main() {
    return 0;
}