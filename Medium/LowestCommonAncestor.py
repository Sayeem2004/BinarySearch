# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def findPath(self, root, p1, v):
        if (root == None): return False;
        p1.append(root.val);
        if (root.val == v): return True;
        if ((root.left != None and self.findPath(root.left, p1, v)) or (root.right != None and self.findPath(root.right, p1, v))):
            return True;
        p1.pop();
        return False;

    def solve(self, root, a, b):
        p1,p2 = [],[];
        if (not self.findPath(root, p1, a) or not self.findPath(root, p2, b)): return -1;
        i = 0;
        while (i < len(p1) and i < len(p2)):
            if (p1[i] != p2[i]):
                return p1[i-1];
            i += 1;
        return p1[i-1];
