#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

    bool intChecker(char c) {
        if(c>=48 && c<=57) {
            return true;
        }
        
        return false;
    }

    string encode(vector<string>& strs) {

        string toEncode;
        
        for(auto& str: strs) {
            int size = str.size();
            toEncode+= to_string(size);
            toEncode+="#";
            toEncode+=str;
        }

        return toEncode;
    }

    vector<string> decode(string s) {
        vector<string> res;

        for(int i=0; i<s.size();) {

            string num;
            //Counting numbers
            while(isdigit(s[i])){
                num+=s[i];
                i++;
            }
            i++; //Skipping #
            int number =stoi(num);
            res.push_back(s.substr(i,stoi(num)));

            i+= number;
        }

        return res;
    }

int main() {

    vector<string> test = {"Hello","Test","anotherTest"};


    string testString = encode(test);


    cout<< "Encode: "<<testString<<endl;

    vector<string> testV = decode(testString);
    cout<<"Decode: ";

    for(auto& str:testV) {
        cout<<str+" , ";
    }
    return 0;
}
