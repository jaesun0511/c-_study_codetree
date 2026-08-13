#include <iostream>
#include <string>
using namespace std;
//정수 A와 B가 주어지고, A진수로 표현된 어떤 수 N이 주어지면, N을 B진수로 변환하여 출력하는 프로그램을 작성해보세요.

int main() {
    int a,b;
    string n;

    int num=0;

    int digits[100]={};
    int cnt=0;

    cin>>a>>b>>n;

    for(int i=0; i<(int)n.size(); i++){
        num=num*a+(n[i]-'0');
    }

    while(true){
        if(num<b){
            digits[cnt++]=num;
            break;
        }
        digits[cnt++]=num%b;
        num=num/b;
    }

    for(int i=cnt-1; i>=0; i--){
        cout<<digits[i];
    }



    // Please write your code here.
    return 0;
}