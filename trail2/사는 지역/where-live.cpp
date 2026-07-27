#include <iostream>
#include <string>
using namespace std;

class People{
    public:
        string name;
        string add;
        string reg;
    People(string name=" ", string add=" ", string reg=" "){
        this->name=name;
        this->add=add;
        this->reg=reg;
    }

};

int main() {
    int n;
    cin>>n;

    People people[n];
    for(int i=0; i<n; i++){
        cin>>people[i].name>>people[i].add>>people[i].reg;
    }
    People last_person=people[0];
    for(int i=0; i<n; i++){
        if(people[i].name>=last_person.name){
            last_person=people[i];
        }
    }

    cout<<"name "<<last_person.name<<endl;
    cout<<"addr "<<last_person.add<<endl;
    cout<<"city "<<last_person.reg<<endl;
    // Please write your code here.
    return 0;
}