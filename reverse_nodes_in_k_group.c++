class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* currptr = head;
        int count = 0;

        // Check if there are at least k nodes left in the list
        while (currptr != nullptr && count < k) {
            currptr = currptr->next;
            count++;
        }

        // If we have k nodes, then proceed with the reversal
        if (count == k) {
            ListNode* prevptr = nullptr;
            ListNode* nextptr = nullptr;
            currptr = head;

            // Reverse k nodes
            for (int i = 0; i < k; i++) {
                nextptr = currptr->next;
                currptr->next = prevptr;
                prevptr = currptr;
                currptr = nextptr;
            }

            // Recursively call for the next k nodes
            if (nextptr != nullptr) {
                head->next = reverseKGroup(nextptr, k);
            }

            // prevptr is now the head of the reversed group
            return prevptr;
        }

        // If we have fewer than k nodes left, return head (no reversal)
        return head;
    }
};
