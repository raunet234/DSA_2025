//practice
#include<iostream>
#include<queue>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left=right=NULL;
    }
};

// 230. Kth Smallest Element in a BST

class Solution {
public:
    int count = 0;
    int ans = -1;
void inorder(TreeNode* root,int k){
   
    if(root==NULL) return ;
    //left
    inorder(root->left,k);
    //root
    count++;
    if(count == k){
        ans = root->val;
        return;
    }
    // right
    inorder(root->right,k);
}
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};

// Kth largest element in BST
// 938. Range Sum of BST

 int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        inorder(root, low, high, sum);
        return sum;
    }
 void inorder(TreeNode* root, int low, int high, int& sum) {
        if (root == NULL) return;

        // Left subtree
        inorder(root->left, low, high, sum);

        // Current node
        if (root->val >= low && root->val <= high) {
            sum += root->val;
        }

        // Right subtree
        inorder(root->right, low, high, sum);
    }
};




// 653.Two Sum IV - Input is a BST
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& arr) {
        if (root == NULL) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root, arr);  // Get sorted values from BST

        int left = 0, right = arr.size() - 1;
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == k) return true;
            else if (sum < k) left++;
            else right--;
        }
        return false;
    }
};



// 450. Delete Node in a BST

class Solution {
public:
    // Helper to find the minimum value node in a subtree
    TreeNode* findMin(TreeNode* root){
        while(root->left != NULL){
            root = root->left;
    }
    return root;
    }
     // Main function to delete a node with the given key from BST
    TreeNode* deleteNode(TreeNode* root, int key) {
        // Base case: if root is NULL, return NULL
        if (root == NULL) return NULL;

        // If key is smaller than current node value, go to left subtree
        if(key<root->value){
            root->left = deleteNode(root->left,key);
        }
        // If key is greater than current node value, go to right subtree
        else if(key>root->value){
            root->right = deleteNode(root->right,key);
        }
        // If current node is the node to delete
        else{
            // Case 1: Node has no child (it's a leaf)
            if(root->left == NULL && root->right == NULL){
                delete node;
                return NULL;
            }
            // case 2: node has only right chiled
            else if(root->left==NULL && root->right !=NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            //case 3:node has only left chiled
            else if(root->left != NULL && root->right == NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            //case 4: node has two chiled
            else{
                // Find the minimum node in the right subtree (inorder successor)
                TreeNode* minNode = findMin(root->right);
                // Replace current node’s value with inorder successor’s value
                root->val = minNode->val;
                // recursively delete the inorder successor node from right subtree
                root->right = deleteNode(root->right, minNode->val);
            } 

        }
         // Return the (possibly updated) root node
        return root;
    }
};




// flatten bst to a sorted list>codingninja
// Helper function to perform inorder traversal and store values in a vector
void inorder(TreeNode<int>* root, vector<int> &values) {
    if (root == nullptr) return;                  // Base case: if node is null, do nothing

    inorder(root->left, values);                  // Recursively traverse left subtree
    values.push_back(root->data);                 // Visit current node and store its value
    inorder(root->right, values);                 // Recursively traverse right subtree
}

// Main function to flatten BST into a sorted right-skewed linked list
TreeNode<int>* flatten(TreeNode<int>* root) {
    vector<int> inorderVal;                       // Vector to store inorder traversal values
    inorder(root, inorderVal);                    // Step 1: Fill vector with sorted values from BST

    if (inorderVal.empty()) return nullptr;       // Edge case: if tree is empty, return null

    // Step 2: Create the head of the new flattened tree using the first value
    TreeNode<int>* head = new TreeNode<int>(inorderVal[0]);
    TreeNode<int>* curr = head;                   // Pointer to keep track of the current node

    // Step 3: Loop through the remaining values and build the right-skewed tree
    for (int i = 1; i < inorderVal.size(); i++) {
        TreeNode<int>* node = new TreeNode<int>(inorderVal[i]); // Create a new node for each value
        curr->left = nullptr;                    // Set left pointer to null (since it's a linked list)
        curr->right = node;                      // Link current node to the newly created node
        curr = node;                             // Move curr pointer to the new node
    }

    return head;                                  // Return the head of the newly created linked list
}
