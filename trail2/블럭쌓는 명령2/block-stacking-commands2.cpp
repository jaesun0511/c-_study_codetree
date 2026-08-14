#include <iostream>
using namespace std;

int main() {
    int n, k;
    int a, b;
    int num[100]={0};
    int h=0;

    cin>>n>>k;

    for(int i=0; i<k; i++){
        cin>>a>>b;
        for(int j=a; j<=b; j++){
            num[j]++;
        }
    }
    for(int i=0; i<n; i++){
        if(num[i]>=h){
            h=num[i];
        }
    }
    cout<<h;
    // Please write your code here.
    return 0;
}