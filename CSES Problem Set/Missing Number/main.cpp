#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> vec(n-1);
    for (int i = 0; i < n-1; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for (int j = 1; j <= n; j++) {
        if (!(vec[j-1] == j)) {
            cout << j;
            break;
        }
    }
    return 0;
}
