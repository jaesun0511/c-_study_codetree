#include <iostream>
using namespace std;

class CodeName{
    public:
        char code;
        int score;

        CodeName(char code=' ', int score=0)
        :code(code), score(score){}
};

int main() {
    CodeName codename[5];
    for(int i=0; i<5; i++){
        cin>>codename[i].code>>codename[i].score;        
    }

    CodeName min_code=codename[0];
    for(int i=0; i<5; i++){
        if(codename[i].score<min_code.score){
            min_code=codename[i];
        }
    }
    cout << min_code.code << " " << min_code.score;
    // Please write your code here.
    return 0;
}