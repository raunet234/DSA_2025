//class is like blueprint/templates for for making objects(actually present in memory)
//class have A,M>attributes(data members),methods
//class do not take any space in memory object is
#include<iostream>
#include <cmath>
using namespace std;

// class Student{
//     public://by default it is private in c++
//     int age;
//     float id;
//     string name;//atributes/data member

    // void getName(){
    //     cout<<"name of student is"<<name<<endl;
    // }

    // string getName(){
        // cout<<"name of student is"<<name<<endl;
//         return name;
//     }

// };

// int main(){

//     Student S1,S2;
//     S1.age=20;
//     S1.id=1.0;
//     S1.name="Rahul";

//     S2.name="Rauneet";
//     S2.id=2.0;
//     S2.age=21;

//     cout<<S2.name<<endl<<S2.age<<endl<<S2.id<<endl;

    // S1.getName();
    // cout<<S1.getName()<<endl;

// }


class Box {
public:
    int l;
    int w;
    int h;

    void calculateArea() {
        int area = 2 * (l * w + l * h + w * h);
        cout << "Area of box is: " << area << endl;
    }

    void calculateVolume() {
        int volume = l * w * h;
        cout << "Volume of box is: " << volume << endl;
    }
};

int main() {
    Box box1, box2;

    box1.l = 10;
    box1.w = 20;
    box1.h = 30;
    box1.calculateArea();
    box1.calculateVolume();

    box2.l = 20;
    box2.w = 30;
    box2.h = 40;
    box2.calculateArea();
    box2.calculateVolume();

    return 0;
}
