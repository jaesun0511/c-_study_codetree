#include <iostream>
using namespace std;

int arr[2005][2005]={0};

int main() {
    int offset=1000;
    int extent=0;

    for(int i=0; i<3; i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        x1+=offset;
        y1+=offset;
        x2+=offset;
        y2+=offset;
        if(i!=2){
            for(int j=x1; j<x2; j++){
                for(int k=y1; k<y2; k++){
                    arr[j][k]=1;
                }
            }
        }
        else if(i==2){
            for(int j=x1; j<x2; j++){
                for(int k=y1; k<y2; k++){
                    arr[j][k]=0;
                }
            }
        }
    }

    for(int i=0; i<2005; i++){
        for(int j=0; j<2005; j++){
            if(arr[i][j]==1){
                extent++;
            }
        }
    }
    cout<<extent;
    // Please write your code here.
    return 0;
}