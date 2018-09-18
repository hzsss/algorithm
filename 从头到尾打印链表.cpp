/*
输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
 public:
  vector<int> dev;
  vector<int>& printListFromTailToHead(struct ListNode* head) {
    if(head!=NULL) {
      if(head->next!=NULL) {
        dev=printListFromTailToHead(head->next);
      }
      dev.push_back(head->val);
    }
    return dev;
  }
};