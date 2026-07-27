#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int h;
        int w;
        Person(string name=" ", int h=0, int w=0){
            this->name=name;
            this->h=h;
            this->w=w;
        }
};

bool cmp(Person a, Person b){
    return a.h<b.h;
}

int main() {
    int n;
    cin>>n;

    Person person[n];
    for(int i=0; i<n; i++){
        cin>>person[i].name>>person[i].h>>person[i].w;
    }
    sort(person, person+n, cmp);
    for(int i=0; i<n; i++){
        cout<<person[i].name<<' '<<person[i].h<<' '<<person[i].w<<endl;
    }
    
    
    // Please write your code here.
    return 0;
}