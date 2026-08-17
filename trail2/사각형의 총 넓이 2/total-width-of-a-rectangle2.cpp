#include <iostream>
using namespace std;

int grid[205][205]; 
int offset = 100;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += offset;
        y1 += offset;
        x2 += offset;
        y2 += offset;

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                grid[x][y] = 1;
            }
        }
    }

    int total_area = 0;
    for (int x = 0; x <= 200; x++) {
        for (int y = 0; y <= 200; y++) {
            if (grid[x][y] == 1) {
                total_area++;
            }
        }
    }

    cout << total_area << endl;

    return 0;
}