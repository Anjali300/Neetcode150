/*
Depth of Binary Tree

Given the root of a binary tree, return its depth.

The depth of a binary tree is defined as the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0; // // Base case: if the root is null, return 0
        int maxLeft = maxDepth(root->left); //  // Recursively calculate the maximum depth of the left and right subtrees
        int maxRight = maxDepth(root->right);
        return max(maxLeft,maxRight)+1; // Return the maximum depth among the left and right subtrees, plus 1 for the current level
    }
};
