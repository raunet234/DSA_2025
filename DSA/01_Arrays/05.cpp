// selection sort>ss>select smallest
// Concept of Selection Sort:
// You go through the whole array and find the smallest number,
//  then put it at the first position.

// Then find the next smallest and put it at the second position, and so on.
// #include<iostream>
// using namespace std;

// void selectionSort(int a[],int n){
//     for(int i=0;i<n;i++){
//         int min=i;
//         //find index of minimum element in the array
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[min]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             swap(a[i],a[min]);
//         }
        
//     }
// }

// bubble sort>opposite of selection sort>>

// void bubbleSort(int a[], int n){
//     for(int i = 0; i < n - 1; i++){
//         cout << "Pass " << i + 1 << ":\n";
//         bool swapped = false;

//         for(int j = 0; j < n - i - 1; j++){
//             cout << "  Comparing " << a[j] << " and " << a[j + 1];

//             if(a[j] > a[j + 1]){
//                 cout << " => swapping\n";
//                 swap(a[j], a[j + 1]);
//                 swapped = true;
//             } else {
//                 cout << " => no change\n";
//             }
//         }
//     }
// }

// void insertionSort(int a[],int n){
//     for(int i=1;i<n;i++){
//         int j=i-1;
//         int key =a[i];

//         while(j>=0 && a[j] > key){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=key;
//     }
// }

// int main(){
//     int arr[] = {5, 4, 7, 1, 3, 9};
//     int size = 6;

//     cout << "Original array: ";
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // selectionSort(arr, size);
//     // bubbleSort(arr, size);

//     cout << "Sorted array: ";
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//playing card>take card and put it on correct possition not swap it shift it