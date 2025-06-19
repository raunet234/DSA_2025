//last index>n-1
#include<iostream>
using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
    // cout<<"Numbers is"<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]+arr[i]<<endl;
    // }
    // cout<<arr[6];
    
// }

int main(){
    int n=5,sum=0;
    
    int arr[5]={10,20,30,40,50};
    
cout<<"elements are"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
cout<<"sum is = "<<sum<<endl;
}
// for(int i: arr){
//     sum=sum+i;
// }
// cout<<sum<<endl;