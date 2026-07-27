#include <iostream>
#include <string>
using namespace std;

class Boom{
    public:
        string code;
        char color;
        int sec;
        Boom(string code, char color, int sec){
            this->code=code;
            this->color=color;
            this->sec=sec;
        }
};

int main() {
    string code;
    char color;
    int sec;
    cin>>code>>color>>sec;

    Boom boom=Boom(code, color, sec);
    cout<<"code : "<<boom.code<<endl;
    cout<<"color : "<<boom.color<<endl;
    cout<<"second : "<<boom.sec;
    // Please write your code here.
    return 0;
}