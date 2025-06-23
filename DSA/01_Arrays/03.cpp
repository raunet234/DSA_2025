// practice problem
#include<iostream>
using namespace std;

//find maximum element>1732
// int find_max(int a[],int n){
//     int max = a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1]){
//             int max=a[i];
//         }
//     }
//     return max;



// }

// int main(){
//     int arr[]={5,4,7,9};
//     int n=4;
//     cout<<find_max(arr,n);
    // cout<<"max element is"<< find_max()<<endl;

// }

//count odd and even numbers in  a array>

// int even_num(int a[],int n){
//     int E_count=0;
//     for(int i=0;i<n;i++){
//         if(a[i]%2==0){
//             E_count++;
//         }
        
//     }
//     return E_count;

// }
// int odd_num(int a[],int n){
//     int O_count=0;
//     for(int i=0;i<n;i++){
//         if(a[i]%2!=0){
//             O_count++;
//         }
        
//     }
//     return O_count;
// }

// int main(){
//     int arr[]={1,3,2,4,5,7,8,9};
//     int n=8;
//     cout<<even_num(arr,n)<<endl;
//     cout<<odd_num(arr,n);
// }

// Reverse and array>125

// int reverse(int a[],int n){
//     for(int i=n-1;i>=0;i--){
//         cout<<a[i]<<endl;
//     }
    
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int n=9;
//     reverse(arr,n);
// }


// find the second largest element in a array

// int secondLargest(int arr[],int size)
// {
//     int firstMAx= INT16_MIN, secondMax = INT16_MAX;

// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int n=9;

// }

//find the first repeating element

// int first_repeating_element(int a[],int n){
    
//     for(int i=0;i<n;i++){
//         if(a[i]==a[i+1]){
//             return a[i];
//         }
//     }


// }

// int main(){
//     int arr[]={5,5,3,6,7,8,8};
//     int n=7;
//     cout<<first_repeating_element(arr,n);

// }

//check if array is sorted

// bool isSorted(int a[],int n){
//     for(int i=0;i<n;i++){
//         if(a[i]>a[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,};
//     int n=9;
//     cout<<isSorted(arr,n);

// }


// homework>check if array is palindrome
// #include <iostream>
// using namespace std;

// 121

// #include <iostream>
// using namespace std;

// bool isPalindrome(int num){
//     int p = num;
//     int remainder = 0;
//     int reverse_num = 0;

//     while(num > 0){
//         remainder = num % 10;
//         reverse_num = reverse_num * 10 + remainder;
//         num = num / 10;
//     }

//     return p == reverse_num;
// }

// int main(){
//     int p = 121;
//     cout << (isPalindrome(p) ? "palindrome" : "not palindrome");
//     return 0;
// }

// 4,7,8,3,1,10,17>k=9->count the number of element greater then k

// #include<iostream>
// using namespace std;

// void greaterThenK(int a[],int size,int k){
//     // int count=0;
//     for(int i=0;i<size;i++){
//         if(a[i]>k){
//             cout<<a[i]<<endl;
//         }
        
//     }
//     //  return 0;
// }

// int main(){
//     int arr[]={3,5,1,3,5,7,9};
//     int n=7;
//     int k=5;
//     greaterThenK(arr,n,k);
//     // return 0;
// }

// 1,0,0,1,1,1,1,0>count the number of 0s and 1s
 
#include<iostream>
using namespace std;

void num_of_0s_1s(int a[],int n){
    int zeros=0;
    int ones=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) ones++;
        else zeros++;
    }
    cout<<ones<<" and "<<zeros<<endl;
}

int main(){
    int arr[]={0,1,1,0,1,0,0};
    int size=7;
    num_of_0s_1s(arr,size);
    
}