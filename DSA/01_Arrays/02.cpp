#include<iostream>
using namespace std;

int sumOfArray(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];

    }
    return sum;
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sum = sumOfArray(arr, 5);
    cout <<sum<<endl;

}