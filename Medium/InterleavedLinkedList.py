# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def solve(self, l0, l1):
        root = LLNode(0);
        if (l0 == None and l1 == None):
            ans = None;
        else:
            ans = root;
        while (l0 != None or l1 != None):
            if (l0 != None):
                root.val = l0.val;
                l0 = l0.next;
                if (l0 != None or l1 != None):
                    root.next = LLNode(0);
                    root = root.next;
            if (l1 != None):
                root.val = l1.val;
                l1 = l1.next;
                if (l0 != None or l1 != None):
                    root.next = LLNode(0);
                    root = root.next;
        return ans;
