#include <iostream>
#include <string>

using namespace std;

class NextLevel{
    public:
        string id;
        int lev;

        NextLevel(string id, int lev)
            :id(id),lev(lev){}
};

int main() {
    string id;
    int lev;
    cin>>id>>lev;

    NextLevel nextlevel1("codetree", 10);
    NextLevel nextlevel2(id,lev);

    cout<<"user "<<nextlevel1.id<<" lv "<<nextlevel1.lev<<endl;
    cout<<"user "<<nextlevel2.id<<" lv "<<nextlevel2.lev<<endl;
    
    // Please write your code here.
    return 0;
}