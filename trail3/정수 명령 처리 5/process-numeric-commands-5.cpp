#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n = 0;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        string a;
        cin >> a; // 먼저 명령어를 입력받음
        
        if(a == "push_back"){
            int b;
            cin >> b; // 숫자가 필요할 때만 b를 입력받음
            v.push_back(b);
        }
        else if(a == "pop_back"){
            v.pop_back();
        }
        else if(a == "size"){
            cout << v.size() << "\n";
        }
        else if(a == "get"){
            int b;
            cin >> b; // 인덱스가 필요할 때 b를 입력받음
            cout << v[b-1] << "\n";
        }
    }
    
    return 0;
}