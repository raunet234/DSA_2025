//pointers will store adderess of varieble
#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr=&a;
    int **ptr2=&ptr;
    *ptr=20;

    cout<<ptr<<endl;//adderess of a
    cout<<&a<<endl;//adderess of a
    cout<<*ptr<<endl;//dereferencing(value of a will come)
    cout<<&ptr<<endl;//(adderess of pointer)
    cout<<ptr2<<endl;//adderess of ptr
    cout<<**ptr2<<endl;//dereferencing of double pointer

}

//heap and stack
//sytax to creat variable in heap memory
// char *ptr= new char;
//to delete variable in heap
//delete ptr