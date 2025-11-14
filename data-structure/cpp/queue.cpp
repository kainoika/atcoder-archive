#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int solution(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    int ans = root->val;

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        ans = node->val;

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    return ans;
}