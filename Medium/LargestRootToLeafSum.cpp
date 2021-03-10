/*
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */

int solve(Tree* root) {
    int sum = 0;
    if (root == NULL) return sum;
    sum = max(sum,solve(root->left));
    sum = max(sum,solve(root->right));
    return root->val + sum;
}
