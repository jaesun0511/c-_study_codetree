#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Data{
    public:
        string name;
        int kr;
        int en;
        int mth;
    Data(string name=" ", int kr=0, int en=0, int mth=0){
        this->name=name;
        this->kr=kr;
        this->en=en;
        this->mth=mth;
    }
};

bool cmp(Data a, Data b){
    return a.kr+a.en+a.mth<b.kr+b.en+b.mth;
}
int main() {
    int n;
    cin>>n;

    Data st[n];
    for(int i=0; i<n; i++){
        cin>>st[i].name>>st[i].kr>>st[i].en>>st[i].mth;
    }
    sort(st, st+n, cmp);
    for(int i=0; i<n; i++){
        cout<<st[i].name<<' '<<st[i].kr<<' '<<st[i].en<<' '<<st[i].mth<<endl;
    }

    // Please write your code here.
    return 0;
}