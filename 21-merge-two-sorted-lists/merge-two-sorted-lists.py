# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy=ListNode(-1)
        curr=dummy
        t1=list1
        t2=list2
        temp=ListNode()
        while t1 or t2:
            if t1==None:
                temp=t2
                curr.next=temp
                curr=curr.next
                t2=t2.next
            elif t2==None:
                temp=t1
                curr.next=temp
                curr=curr.next
                t1=t1.next
            elif t1.val <= t2.val:
                temp=t1
                curr.next=temp
                curr=curr.next
                t1=t1.next
            elif t2.val<t1.val:
                temp=t2
                curr.next=temp
                curr=curr.next
                t2=t2.next
        return dummy.next
                

        