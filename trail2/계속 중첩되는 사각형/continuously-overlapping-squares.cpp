#include <iostream>
using namespace std;

int main() {//빨=1 파=2;
    int n;
    int arr[205][205]={0};
    int offset=100;
    int color=0; //짝 빨,홀 파
    cin>>n;

    int x1,y1,x2,y2;
    while(n--){
        cin>>x1>>y1>>x2>>y2;
        x1+=offset;
        y1+=offset;
        x2+=offset;
        y2+=offset;

        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                if(color%2==0){
                    arr[i][j]=1;
                }
                else if(color%2==1){
                    arr[i][j]=2;
                }
            }
        }
        color++;
    }

    int blue=0;

    for(int i=0; i<205; i++){
        for(int j=0; j<205; j++){
            if(arr[i][j]==2){
                blue++;
            }
        }
    }

    cout<<blue;


    // Please write your code here.
    return 0;
}