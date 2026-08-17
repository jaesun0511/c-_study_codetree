#include <iostream>
using namespace std;

int arr[200005]={0};    //0 g 1 w 2 b

int main() {
    int idx=100000;
    int n;
    int x;
    char dir;
    
    cin>>n;
    while(n--){
        cin>>x>>dir;
        if(dir=='L'){
            for(int i=0; i<=x-1; i++){
                arr[idx-i]=1;
            }
            idx=idx-x+1;
        }
        if(dir=='R'){
            for(int i=0; i<=x-1; i++){
                arr[idx+i]=2;
            }
            idx=idx+x-1;
        }
    }

    int w=0, b=0;
    for(int i=0; i<200005; i++){
        if(arr[i]==1){
            w++;
        }
        else if( arr[i]==2){
            b++;
        }
    }
    cout<<w<<' '<<b;

    // Please write your code here.
    return 0;
}