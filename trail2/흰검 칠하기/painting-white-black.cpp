#include <iostream>
using namespace std;

int arr[200005] = {0};   // 0=x, 1=흰, 2=검, 3=회
int cnt_w[200005] = {0};
int cnt_b[200005] = {0};

int main() {
    int idx = 100000;
    int n;
    cin >> n;

    while (n--) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L') {
            for (int i = idx; i >= idx - x + 1; i--) {
                if (arr[i] == 3) continue;

                cnt_w[i]++;

                if (cnt_w[i] >= 2 && cnt_b[i] >= 2) {
                    arr[i] = 3;
                } else {
                    arr[i] = 1;
                }
            }
            idx = idx - x + 1;
        }
        else if (dir == 'R') {
            for (int i = idx; i <= idx + x - 1; i++) {
                if (arr[i] == 3) continue;

                cnt_b[i]++;

                if (cnt_w[i] >= 2 && cnt_b[i] >= 2) {
                    arr[i] = 3;
                } else {
                    arr[i] = 2;
                }
            }
            idx = idx + x - 1;
        }
    }

    int w = 0, b = 0, g = 0;
    for (int i = 0; i < 200005; i++) {
        if (arr[i] == 1) w++;
        else if (arr[i] == 2) b++;
        else if (arr[i] == 3) g++;
    }

    cout << w << ' ' << b << ' ' << g;
    return 0;
}