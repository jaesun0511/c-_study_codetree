#include <iostream>
#include <algorithm>
using namespace std;

class Data {
public:
    int n;
    int d;

    Data(int n = 0, int d = 0) {
        this->n = n;
        this->d = d;
    }
};

bool cmp(Data a, Data b) {
    if (a.n == b.n) {
        return a.d < b.d;
    }
    return a.n < b.n;
}

int main() {
    int n;
    cin >> n;

    Data num1[n];
    Data num2[n];

    for (int i = 0; i < n; i++) {
        cin >> num1[i].n;
        num1[i].d = i + 1;
        num2[i] = num1[i];
    }

    sort(num2, num2 + n, cmp);

    int ans[1000];

    for (int i = 0; i < n; i++) {
        ans[num2[i].d] = i + 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}