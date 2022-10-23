//https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem?isFullScreen=true
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
SinglyLinkedListNode* newnode = create_singly_linked_list_node(data);
    newnode->next = llist;
    return newnode;
}
