#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    string substr = "";
    substr += str[0];
    int highestNum = 0;
    for (int n = 0; n < (int)str.size(); n++) {
        if (!(str[n+1] == str[n])) {
            // what do we do to the substring when str[n+1] does not equal str[n]?
            // we check the size of the substring against highestNum
            // if size of substring is higher than highestNum then highestNum is replaced with size of substring
            if ((int)substr.size() > highestNum) {
                highestNum = (int)substr.size();
            }
            substr = str[n+1];
        }
        else {
            // what do we do to the substring when str[n+1] equals str[n]?
            // we add the letter to the substring
            substr += str[n+1];
        }
    }
    cout << highestNum << endl;
    return 0;
}