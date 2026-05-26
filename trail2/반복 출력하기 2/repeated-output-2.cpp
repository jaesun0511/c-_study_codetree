#include <iostream>
using namespace std;

void printhello(int n){
    if(n==0){
        return;
    }

    printhello(n-1);

    cout<<"HelloWorld"<<endl;
}

int main() {
    int n;
    cin>>n;
    printhello(n);
    // Please write your code here.
    return 0;
}