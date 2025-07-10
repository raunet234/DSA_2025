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

void printLevelOrder(TreeNode* root){
    if(root==NULL) return ;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(temp!=NULL){
             cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    else if(!q.empty()){
        q.push(NULL);
    }

        }
       
}