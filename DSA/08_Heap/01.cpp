
#include<iostream>
using namespace std;
//Heap
/*1.heap should be CBT(complete binary Tree)
//last node started filling from left side 
2.it should be maxHeap or minHeap*/
/*in heap we dont check that is tree or not, we just check max or min 
heap property*/
//max heap ->root is the max
//min heap->root is the lowest

//insertion(one base indexing)

//1.insert at the end
//2.swap the node with parent node till we get the correct position
//Node-> i node
//left child at ->2*i index
//right child at ->2*i+1 index
//parent->i/2

//zero based indexing
//left child->2*i+1 index
//right child->2*i+2 index
//parent ->(i-1)/2;

class heap{
    public:

    int arr[100];
    int size;
    
    heap(int val){
        size= 0;
        arr[0] = -1;
    }
    void insert(int val){
        size = size +1;
        int i = size;
        arr[i] = val;
        while(i>1){
            int parent = (i)/2;
            if(arr[parent] < arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
        }
        else return;
    }
}
void print(){
    for(int i=1;i<size;i++){
        cout<<arr[i]<<" ";
}

int main(){
    heap h;
    h.insert(20);
    h.insert(10);
    h.insert(8);
    h.print();
}

//deletion in heap
//1.remove the root node
//2.replace the root node with last node
//remove lasr node
// than compare root node with left and right child
//whoever is greater swap with root
void deletion(){
    if(size==0){
        cout<<"heap is empty";
        return;
    }
    arr[1] = arr[size];
    size--;
    int i=1;
    while(i<size){
        int left = 2*1;
        int right = 2*i+1;

        if(left<size && arr[i]<arr[left]){
            swap(arr[i],arr[left]);
            i=left;
        }
        else if(right < size && arr[i] < arr[right]){
            swap(arr[i], arr[right]);
            i = right;
        }
        else return;
    }
}

//five heapify properties
//1.root node is greater than left and right child
//2.left child is greater than right child
//3.root node is greater than left child
//4.root node is greater than right child


void heapify(int arr[],int, int n,int i ){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;
    
    if(left < n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
    }
}

void print(){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {-1,12, 11, 13, 5, 6,};
    int n = 5;
    for(int i = n/2; i > 0;i--){
        h.heapify(arr,n,i);
    }
    for(int i= 0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

//heapsort explaination
//1.first we heapify the array
//2.then we remove the root node and put it at the end of the array
//3.then we heapify the array again
//4.repeat step 2 and 3 until the array is sorted

//step: 1->swap root node with last
//step: 2->remove last bcz it is sorted by decreasing the size
// step: 3->heapify
//repeat
//return

void heapsort(int arr[],int n){
    int size = n;
    while(size>1){
        swap(arr[size],arr[1]);

        size--;
        heapify(arr,size,1);
    }
}

