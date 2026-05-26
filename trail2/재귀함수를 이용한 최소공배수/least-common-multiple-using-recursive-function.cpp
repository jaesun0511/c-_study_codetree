#include <iostream>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b); 
}

int get_lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int get_array_lcm(int arr[], int idx, int current_lcm) {
    if (idx < 0) {
        return current_lcm;
    }

    int next_lcm = get_lcm(current_lcm, arr[idx]);

    return get_array_lcm(arr, idx - 1, next_lcm);
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int final_lcm = get_array_lcm(arr, n - 2, arr[n - 1]);

    cout << final_lcm << endl;

    return 0;
}