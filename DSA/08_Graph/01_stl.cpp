#include<iostream>
using namespace std;

// STL
int main(){
    vector<int> v = {1,2,3};
    v.push_back();

    for(auto i : v){
        //cout <<i <<" ";
    }

    pair<int,string> p = {1,"first"};
    cout<<p.first<<" : "<<p.second<<endl;

    vector<pair<int,int>> vp = {{1,2},{3,4}};
    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<endl;
        }
}