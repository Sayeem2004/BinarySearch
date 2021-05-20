/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if (root == NULL) return 0;
    int sm = 1;
    if (root->left != NULL) sm += solve(root->left);
    if (root->right != NULL) sm += solve(root->right);
    return sm;
}  
