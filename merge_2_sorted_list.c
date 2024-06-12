#include <stdio.h>
#include <stdlib.h>

// Function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

struct Solution {
    // Function to merge two sorted linked lists
    struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        // Create a dummy node 
        struct ListNode dummy;
        struct ListNode* tail = &dummy;
        dummy.next = NULL;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach the remaining nodes from list1 or list2
        if (list1 != NULL) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        return dummy.next;
    }
};
