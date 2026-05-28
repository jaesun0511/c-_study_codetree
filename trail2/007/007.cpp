#include <iostream>
#include<string>
using namespace std;

class Hello{
    public:
        string code;
        char place;
        int time;

        Hello(string code, char place, int time){
            this->code=code;
            this->place=place;
            this->time=time;
        }
};

int main() {
    string code;
    char place;
    int time;
    cin>>code>>place>>time;

    Hello hello1=Hello(code, place, time);
    cout<<"secret code : "<<hello1.code<<endl;
    cout<<"meeting point : "<<hello1.place<<endl;
    cout<<"time : "<<hello1.time;
    // Please write your code here.
    return 0;
}