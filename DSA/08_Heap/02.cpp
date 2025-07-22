#include<iostream>
#include <functional>
#include<queue>
using namespace std;


int main(){
    priority_queue<int,vector<int>, greater<int>> minHeap;

    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(10);
    minHeap.push(3);


    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl; // Output: 1 3 5 10

    // cout<<pq.top()<<endl;
}

//Is Binary Tree Heap
class Solution{
    public:
    int countNodes(Nodes* root){
        if(root==NULL) return 0;

        return 1 + count
    }
    bool isCBT(Node* root){
        if(root==NULL) return true;
    }
    bool isMaxOrder(Node*)
        if(root->left == NULL && root->NULL) return true;

        if(root->right == NULL) return (root->data > root->left->data);

        else{
            bool left = isMaxorder(root->left);
            bool right = isMaxOrder(root->right);
            return (left && right && (root->data> root->left->data
            && root->data ? root->right->data));
        }
}
bool isHeap(Node* tree){
    int index = 0;
    int total
}