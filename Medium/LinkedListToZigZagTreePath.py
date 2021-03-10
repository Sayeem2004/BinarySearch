# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def solve(self, node):
        if (node == None): return None;
        root = Tree(node.val);
        ans = root;
        while (node.next != None):
            node = node.next;
            temp = Tree(node.val);
            if (temp.val < root.val):
                root.left = temp;
                root = root.left;
            else:
                root.right = temp;
                root = root.right;
        return ans;
