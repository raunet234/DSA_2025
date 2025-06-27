#include<iostream>
using namespace std;
// binary->always work on sorted collection only>time complexity >log n
/*mid=star+e/2

if(arr[mid]==key){
return mid;}

key>mid->s=mid+1
key <mid->e=mid-1*/ 

int binary_search(int a[],int n,int k){
    int start=0;
    int end=n-1;
    
    int mid=(start+end)/2;
    
    while(start<=end){
        if(a[mid]==k){
            return mid;
        }
        //right
        if(k>a[mid]){
            start = mid + 1;
        }
        //left
        else{
            end=mid -1;
        }
        mid = (start+end)/2;
    }
    return mid;
}


int main(){
    int arr[] = {5, 6,7,8,9};
    int size = 5;
    int key=8;

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

   cout<<"index of 3 is"<< binary_search(arr, size,key);

    // cout << "Sorted array: ";
    // for(int i = 0; i < size; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    return 0;
}
