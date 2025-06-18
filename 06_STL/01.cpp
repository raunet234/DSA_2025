//it is a library where vector is on of the book
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    //adding in vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.insert(v1.begin()+1,50);
    //accessing it
    // cout<<v1[0];
    // cout<<v1.at(1);
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1.at(i)<<endl;
    // }
    //using for each loop
    // for(int i : v1){
    //     cout << i <<endl;
    // }
    
// }
//
// int main(){
//     cout<<"write integer"<<endl;
//     int n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"print in reverse";

//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }