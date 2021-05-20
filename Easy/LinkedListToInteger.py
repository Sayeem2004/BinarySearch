# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def solve(self, node):
        s = "";
        while (node.next != None):
            s += str(node.val);
            node = node.next;
        s += str(node.val);
        return int(s,2);
