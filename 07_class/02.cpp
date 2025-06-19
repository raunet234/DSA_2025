//constructer is a special member function which is called 
// automatically when object is initialize and name is same
//  as of class name and no return type
//
#include<iostream>
using namespace std;
// class Student{
//     public:
//     int age;
//     string name;
//     Student( int i,string j){
//         age = i;
//         name = j;
//         // cout<<"constructer called"<<endl;
//     }
// };

// int main(){
//     Student s(20,"Rahul");
//     cout<<s.age<<" "<<s.name<<endl;
// }

class project{
    public:
    int id;
    string name;

    project(int i,string k){//parameterized constructer
        id = i;
        name = k;

    }
};

int main(){
    project p(1001,"credNFT");
    cout<<p.id<<" "<<p.name<<endl;

}