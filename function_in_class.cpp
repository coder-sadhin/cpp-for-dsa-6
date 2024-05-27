#include <bits/stdc++.h>
using namespace std;

class Parson
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Parson(string nm, int ag,int mk1,int mk2){
        name=nm;
        age=ag;
        mark1=mk1;
        mark2=mk2;
    }
    void he(){
        cout<<name<<" "<<age<<endl;
    }
    int total(){
        return mark1+mark2;
    }
};

int main()
{
    Parson akkas("akkas",24,89,78);
    // cout<<akkas.age<<endl;
    akkas.he();
    cout<<akkas.total()<<endl;
    return 0;
}