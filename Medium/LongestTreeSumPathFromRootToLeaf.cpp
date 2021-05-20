/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 
 pair<int,int> helper(Tree* root) {
    if (root == NULL) return make_pair(0,0);
    pair<int,int> p = make_pair(0,0);
    if (root->left != NULL) {
        pair<int,int> p1 = helper(root->left);
        if (p1.first > p.first) p = p1;
        if (p1.first == p.first && p1.second > p.second) p = p1;
    }
    if (root->right != NULL) {
        pair<int,int> p2 = helper(root->right);
        if (p2.first > p.first) p = p2;
        if (p2.first == p.first && p2.second > p.second) p = p2;
    }
    return make_pair(p.first+1,p.second+root->val);
}

int solve(Tree* root) {
    if (root == NULL) return 0;
    pair<int,int> p = helper(root);
    return p.second;
}
