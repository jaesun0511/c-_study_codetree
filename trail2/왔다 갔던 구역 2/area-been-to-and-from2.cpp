#include <iostream>
using namespace std;

int main() {
    int n;
    char x;
    int disb=0;
    int dis=0;
    int arr[2005]={};
    int offset=1000;
    int num=0;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>dis>>x;
        
        if(x=='L'){
            for(int j=0; j<dis; j++){
                arr[offset-j-1+disb]=arr[offset-j-1+disb]+1;
                
            }
            disb=disb-dis;
        }
        if(x=='R'){
            for(int j=0; j<dis; j++){
                arr[offset+j+disb]=arr[offset+j+disb]+1;
            }
            disb=disb+dis;
        }
    }

    for(int i=0; i<2005; i++){
        if(arr[i]>=2){
            num+=1;
        }
    }
    cout<<num;
    // Please write your code here.
    return 0;
}

//12345678