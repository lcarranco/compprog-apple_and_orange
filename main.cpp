#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s = 0;
    int t = 0;
    int a = 0;
    int b = 0;
    int m = 0;
    int n = 0;
    int distance = 0;
    int location = 0;
    int appleCounter = 0;
    int orangeCounter = 0;

    cin >> s;
    cin >> t;
    cin >> a;
    cin >> b;
    cin >> m;
    cin >> n;

    for (int i = 0; i < m; ++i) {
        cin >> distance;
        location = a + distance;
        if (s <= location && location <= t) {
            ++appleCounter;
        }
    }

    for (int i = 0; i < n; ++i) {
        cin >> distance;
        location = b + distance;
        if (s <= location && location <= t) {
            ++orangeCounter;
        }
    }

    cout << appleCounter << endl;
    cout << orangeCounter << endl;

    return 0;
}