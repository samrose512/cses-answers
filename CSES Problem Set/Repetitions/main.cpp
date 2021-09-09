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
            if ((int)substr.size() > highestNum) {
                highestNum = (int)substr.size();
            }
            substr = str[n+1];
        }
        else {
            substr += str[n+1];
        }
    }
    cout << highestNum << endl;
    return 0;
}