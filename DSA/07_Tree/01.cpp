#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data = val;
        left = right = NULL;
    }
}


int main(){
    TreeNode root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
}

/*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2*/

//solution

// void searchTarget(){
//     int left=0,right=nums.size()-1;
//     while(left<=right){
//         int mid = left + (right-left)/2;
//         if(nums[mid]==target) return mid;
//         else if(nums[mid]<target)left = mid+1;
//         else right = mid-1;
//     }
//     return left;
// }
