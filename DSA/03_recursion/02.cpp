#include<iostream>
using namespace std;
//try binary search in recursive

bool isSorted(int arr[],int size){
    //base
    if(size==1 || size==0) return true;
    if(arr[0]>arr[1]) return false;

    else{
        return isSorted(arr+1,size-1);
    }
}

int getSum(int arr[],int size){
    //base
    if(size==0) return 0;
    if(size==1) return arr[0];

    int remainingPart = getSum(arr+1,size-1);
    int sum =arr[0] + remainingPart;
    return sum;
}

int isPresent(int arr[],int size,int key){
    //base
    if(size==0) return false;
    else if(arr[0]==key)
    return true;
    else{
        return isPresent(arr+1,size-1,key);
    }
}

bool binarySearch(int arr[],int s,int e,int k){
    //base
    if(s>e) return false;
    int mid = (s+e)/2;
    if(arr[mid]==k) return true;
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}