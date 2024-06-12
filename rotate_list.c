#include <stdio.h>
#include <stdlib.h>

//create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

//length of the linked list
int getLength(struct ListNode* head) {
    int length = 0;
    while (head != NULL) {
        length++;
        head = head->next;
    }
    return length;
}

struct Solution {
    //rotate the linked list to the right by k places
    struct ListNode* rotateRight(struct ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        //length of the linked list
        int length = getLength(head);

        // Find the effective rotation steps
        k = k % length;
        if (k == 0) {
            return head;
        }

        // Find the new tail: (length - k - 1)th node
        struct ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }

        // Find the new head: (length - k)th node
        struct ListNode* newHead = newTail->next;

        // Break the link to rotate
        newTail->next = NULL;

        // Find the old tail and connect it to the old head
        struct ListNode* oldTail = newHead;
        while (oldTail->next != NULL) {
            oldTail = oldTail->next;
        }
        oldTail->next = head;

        return newHead;
    }
};
