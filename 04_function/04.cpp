#include<iostream>
using namespace std;

// void myfunc(int x){
//     x++;
//     cout<<"increment done, new value"
// }


// int main(){
//     int a=5;
//     myfunc(a);
//     cout<<"new value of a is "<<a<<endl;
// }

//pass by value>make a copy of original value/varieble
//pass by references>function will recive adderess of original varieble

void pr_func(int &x){
     x++;
}

int main(){
    int a=5;
    pr_func(a);
    cout<<"new value is "<<a;
}