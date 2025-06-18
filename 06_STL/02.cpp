//map(already sorted)
#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
int main (){
    map<int ,string>m1;

    m1[002]="Person1";
    m1[001]="Person2";
    // m1[002]=="person3";

    cout<<m1[001]<<endl;
    cout<<m1.size()<<endl;

    cout << "Keys in the map:" << endl;
    for (const auto& pair : m1) {
        cout << pair.first<<" "<<pair.second << endl;  // .first is the key
    }

}

//print keys and values sepratly
