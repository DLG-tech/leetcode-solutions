/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* midd = slow;
    while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;

}
         printf("[");
        while(midd != NULL){
            printf("%d", midd->val);
             if (midd->next != NULL) printf(",");
             midd = midd->next;
        }
        printf("]");  

        return slow;
}
