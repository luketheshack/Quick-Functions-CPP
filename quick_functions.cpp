#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> const &v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}

void print(vector<char> const &v) {
    for (auto i : v) cout << i << " ";
    cout << endl;
}

int main() {
    return 0;
}