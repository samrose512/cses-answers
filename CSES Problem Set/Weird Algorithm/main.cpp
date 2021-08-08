#include <iostream>
#include <string>

using namespace std;

int main() {
    long long input;
    cin >> input;
    cout << input << " ";
    if (input != 1) {
        do {
            if (input % 2 != 0) {
                input = (input*3)+1;
            } else {
            input /= 2;
            }
            cout << input << " ";
        } while (input > 1);
    }
    return 0;
}
