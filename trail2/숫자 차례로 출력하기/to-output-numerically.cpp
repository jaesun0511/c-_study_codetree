#include <iostream>
using namespace std;

void re(int n){
    if(n==0){
        return;
    }
    cout<<n<<' ';
    re(n-1);
}

void fo(int n){
    if(n==0){
        return;
    }
    fo(n-1);
    cout<<n<<' ';

}

int main() {
    int n;
    cin>>n;
    fo(n);
    cout<<endl;
    re(n);
    // Please write your code here.
    return 0;
}