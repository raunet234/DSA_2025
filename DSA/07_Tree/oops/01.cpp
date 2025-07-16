class test{
    //data members
    //member function
}

//four pillers of oops
//encapsulation(capsule)
//SRP
//data hiding
/*defination: encapsulation
      1.  it is a process of wraping similar code in one place
      2.  we can't access any function from class directly.
      3. Increase in security of data
      4. it helps to control the modification of out data members.
*/
class rectangle{//create class
    private://default
    //data members
    int length;
    int breadth;
    public:
    //constructor
    rectangle(int l,int b){
        //assign value
        length=l;
        breadth=b;
    }
    //get methode
    int getLength(){
        return length;
    }
    //set methode
    void setLength(int val){
        length=val;
    }
};

int main()
{
    rectangle r1(5,10);
    cout<<"Befor : "<< ri.getLength()<<endl;
    r1.setLength(20);
    cout<<"After : "<< r1.getLength()<<endl;
}

//inheritance
/*defination: in this a class(called the child or derived) acquires properties
and behaviours from another class(called parent or base class)*/
class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"Woof"<<endl;
    }
};
class lion:public Animal{
    public:
    void roar(){
        cout<<"Roar"<<endl;
    }
};

int main(){
    Dog d1;
    d1.bark();
    d1.eat();

    lion l1;
    l1.roar();
    l1.eat();
}
//single inheritance
/*in this a child class inherits from only one parent class*/
//multiple inheritance
/*in this a child class inherits from more than one parent class*/
//multilevel inheritance
/*in this a child class inherits from a parent class which itself has inherited from another parent class*/
class A{
    public:
    void funA(){
        cout<<"funA"<<endl;
}
};
class B:public A{
    public:
    void funB(){
        cout<<"funB"<<endl;
    }
};
class C:public A,public B{
    public:
    void funC(){
        cout<<"funC"<<endl;
    }
};
//hierarchical inheritance
/*in this a parent class can have more than one child class*/
class A{
    public:
    void funA(){
        cout<<"funA"<<endl;
    }
};

class B : public A{

};
class C : public A{

};

//hybrid inheritance
/*in this a child class inherits from more than one parent class and also has child classes of its

//polymorphism
/*in this a single entity is represented by multiple forms,
term  polymorphism is combination of poly + morph which means many form
e.g single person behaving defferently according to the situation

polymorphism -> compile time-> function overloading and operator overloading
[complie time-> the overloaded function are invoked by matching the type and 
number of arguments. this information is available at compile time and
therefore compiler selects the appropriate function at compile time.it is
 also know as static binding or early binding]
*/
class Animal{  
    public:
    void sound(){
        cout<<"Animal makes a sound"<<endl;
        }
};
class Dog : public Animal{  
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
        }
};
//or
int add(inta, int b){
    return a+b;
}
int add(int a,int b, int c){
    return a+b+c;
}
int main(){
    add(2,3);
    add(2,3,4);
}

/*[runtime-> this type of polymorphism is achieved by function ovveriding,
it is also called late binding dynamic polymorphism.
this function call resolved at runtime]*/
class Base{
    public:
    void display(){
        cout<<"Base class"<<endl;
        }
};
class Child : public Base{
    public:
    void display(){
        cout<<"Child class"<<endl;
        }
};

int main(){
    child c1,c2;
    c1.display();

    c2.Base::display();
}

/*A virtual function is a memeber function in base class that we expect to 
redefine in derived class*/
class Base{
    public:
    virtual void display(){
        cout<<"Base class"<<endl;
        }
};
class Derived : public Base{
    public:
    void display() override{
        cout<<"from derived"<<endl;
        }
};

int main(){
    Derived d1;
    Base *b = &d1;
    b->print();
}
