#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[205][205]={0};
    int offset=100;
    int x=0, y=0;

    cin>>n;
    while(n--){
        cin>>x>>y;
        x+=offset;
        y+=offset;

        for(int i=x; i<x+8; i++){
            for(int j=y; j<y+8; j++){
                arr[i][j]=1;
            }
        }
    }

    int ex=0;
    for(int i=0; i<205; i++){
            for(int j=0; j<205; j++){
                if(arr[i][j]==1){
                    ex++;
                }
            }
    }
    cout<<ex;


    // Please write your code here.
    return 0;
}