#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int arr[1005];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_streak = 1;
    int current_streak = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        max_streak = max(max_streak, current_streak);
    }

    cout << max_streak << endl;

    return 0;
}