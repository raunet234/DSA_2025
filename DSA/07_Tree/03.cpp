#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
        data= value;
        left = right = NULL;
    } 
};


int totalNodes(TreeNode* root){

    if(root==NULL) return 0;
    else return 1+ (totalNodes(root->left)+(totalNodes(root->right)));
}

int countLeaf(TreeNode* root){
    if(root==NULL) return 0;

    if(!root->left && !root->right) return 1;
    else return countLeaf(root->left) + countLeaf(root->right);
}

int calHeight(TreeNode* root){
    if(root==NULL) return 0;

    int leftH= calHeight(root->left);
    int rightH = calHeight(root->right);

    return max(leftH,rightH) + 1;
}

int sumOfDataOfNodes(TreeNode* root){
    if(root==NULL) return 0;

    int sumLeft = sumOfDataOfNodes(root->left);
    int sumRight = sumOfDataOfNodes(root->right);

    return root->data +sumLeft + sumRight;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
}