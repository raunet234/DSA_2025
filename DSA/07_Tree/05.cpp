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

int sumAtK(TreeNode* root,int k){
    if(root==NULL) return -1;//base

    queue<TreeNode*> q;//create queue
    q.push(root);//in queue
    q.push(NULL);
    int level = 0;
    int sum = 0;
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();

        if(temp!=NULL){
            if(level==k){
                sum += temp->data;
            }
            if(temp->right){
                q.push(temp->right);

            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }  

}
return sum;
}

TreeNode* buildTreeLevelOrder() {
    int rootData;
    cout << "Enter root value (-1 for NULL)"; // Prompt user for root value
    cin >> rootData;

    if (rootData == -1) return NULL; // Base case: if root is -1, return NULL

    TreeNode* root = new TreeNode(rootData); // Create root node
    queue<TreeNode*> q; // Create a queue to help with level order insertion
    q.push(root); // Push root node into queue

    while (!q.empty()) { // Loop until queue is empty
        TreeNode* current = q.front(); // Get the front node
        q.pop(); // Remove the front node

        int leftData, rightData;
        cout << "Enter left and right of " << current->data << " (-1 for NULL) "; // Ask for left and right child values
        cin >> leftData >> rightData;

        if (leftData != -1) { // If left child exists
            current->left = new TreeNode(leftData); // Create left child
            q.push(current->left); // Push it to queue
        }
        if (rightData != -1) { // If right child exists
            current->right = new TreeNode(rightData); // Create right child
            q.push(current->right); // Push it to queue
        }
    }
}




void printLevelOrder(TreeNode* root) {
    if (!root) return;

    queue;
}

void leftView(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();

        for(int i = 0;i<levelSize; i++){
            TreeNode* curr = q.front();
            q.pop();
            if(i == 0) cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);

        }
    }
}

void rightView(TreeNode* root){
    if(root == NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();

        for(int i=0;i<levelSize;i++){
            TreeNode* curr = q.front();
            q.pop();

             if(i == levelSize-1) cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
}

vector<int> zigzagLevelOrder(TreeNode* root) {
    vector<int> result; // Final result vector to store the zigzag order

    if (root == NULL) return result; // Edge case: if root is NULL, return empty vector

    queue<TreeNode*> q; // Queue for level order traversal
    q.push(root); // Push the root node to start
    bool leftToRight = true; // Flag to track the direction of zigzag

    while (!q.empty()) {
        int levelSize = q.size(); // Number of nodes at the current level
        vector<int> level(levelSize); // Vector to store nodes of the current level

        for (int i = 0; i < levelSize; i++) {
            TreeNode* curr = q.front(); // Get the front node
            q.pop(); // Remove the front node

            // Determine the index to insert the node's value based on direction
            int index = leftToRight ? i : (levelSize - 1 - i);
            level[index] = curr->data; // Store the current node's value

            // Push the child nodes into the queue for next level
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }

        // Add current level's result to final result vector
        for (int i : level) {
            result.push_back(i);
        }

        // Toggle the direction for next level
        leftToRight = !leftToRight;
    }

    return result; // Return the final zigzag order
}

// boundryTraversal
void boundaryTraversal(TreeNode* root) {
    
}

// LCA(Lowest Common Ancestor) in binary tree
class Solution {
public:
    Node* lca(Node* root, int n1, int n2) {
        // Base case: If the current node is NULL, return NULL
        if (root == NULL) return NULL;

        // If the current node matches either n1 or n2, return this node
        if (root->data == n1 || root->data == n2) return root;

        // Recurse on the left and right subtree
        Node* leftAns = lca(root->left, n1, n2);
        Node* rightAns = lca(root->right, n1, n2);

        // If both left and right return non-NULL, it means n1 and n2 are found in 
        // different subtrees, so current node is their lowest common ancestor
        if (leftAns != NULL && rightAns != NULL) {
            return root;
        }
        // If only left subtree returned a node, then LCA is in left subtree
        else if (leftAns != NULL && rightAns == NULL) {
            return leftAns;
        }
        // If only right subtree returned a node, then LCA is in right subtree
        else if (leftAns == NULL && rightAns != NULL) {
            return rightAns;
        }
        // If both are NULL, return NULL
        else {
            return NULL;
        }
    }
}; 

//k sum path
class Solution {
public:

    // Helper function to recursively explore all paths
    void solve(Node* root, int k, int &count, vector<int> &path) {
        // Base case: if the node is NULL, return
        if (root == NULL) return;

        // Add the current node's value to the path
        path.push_back(root->data);

        // Recursively call for left and right subtrees
        solve(root->left, k, count, path);
        solve(root->right, k, count, path);

        // After visiting left and right, check all sub-paths ending at this node
        // and calculate if their sum is equal to k
        int sum = 0;
        for (int i = path.size() - 1; i >= 0; i--) {
            sum += path[i];
            if (sum == k) {
                count++; // Found a valid path with sum == k
            }
        }

        // Backtrack: remove the current node from the path before returning
        path.pop_back();
    }

    // Main function to return count of all paths with sum k
    int sumK(Node* root, int k) {
        vector<int> path;  // Stores the current path from root to node
        int count = 0;     // To count the number of valid paths
        solve(root, k, count, path); // Start DFS traversal
        return count; // Return final count of paths with sum k
    }
};

// 700. Search in a Binary Search Tree

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root-> val == val){
            return root;
        }
        if(val<root->val){
            root->left = insertIntoBST(root->left, val);  // store returned node
        }
        else{
            return searchBST(root->right,val);
        }
    }
};
//Validate Binary Search Tree
class Solution {
    public:
    bool isValid(TreeNode* root,int minVal,int maxVal) {
        if(root==NULL) return true;
        if(root->val<=minVal || root->val>=maxVal) return false;
        return isValidBST(root->left,minVal,root->val) && isValidBST(root->right,root->val,maxVal);

    }
    bool isValidBST(TreeNode* root){
        return isValid(root,INT_MIN,INT_MAX);
    }
};
