#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    int elapsed_day=0;
    cin>>m1>>d1>>m2>>d2;

    int num_of_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(true){
        if(m1==m2&&d1==d2){
            break;
        }
        elapsed_day++;
        d1++;

        if(d1>num_of_day[m1]){
            m1++;
            d1=1;
        }
    }
    cout<<elapsed_day+1;
    // Please write your code here.
    return 0;
}