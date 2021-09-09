#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long vecSize;
    cin >> vecSize;
    vector<long long> vec(vecSize);
    for (int i = 0; i < vecSize; i++) {
        cin >> vec[i];
    }
    long long moves = 0;
    for (int j = 1; j < vecSize; j++) {
        if (vec[j] < vec[j-1]) {
            moves += (vec[j-1]-vec[j]);
            vec[j] += (vec[j-1]-vec[j]);
        }
    }
    cout << moves << endl;
    return 0;
}