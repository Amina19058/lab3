#include <stdio.h>
#include <stdlib.h>
 struct node {
    int data;
    struct node *next;
 };
 void print_list(struct node *head) {
     struct node *current;
     current = head;
     while (current!=NULL) {
        printf("%d\n", current->data);
        current = current->next;
     }
 }
 void insert_node(struct node *head, struct node *new_node, struct node *prev) {
     struct node *current;
     current = head;
     while (current!=prev) {
        current = current->next;
     }
     new_node->next = current->next;
     current->next = new_node;
 }
 void  delete_node(struct node *head, struct node *del_node) {
     struct node *current;
     current = head;
     while (current->next !=del_node) {
        current = current->next;
     }
     current->next = del_node->next;
 }
int main()
{
    struct node node1, node2, node3, node4;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = (struct node *)NULL;
    print_list(&node1);
    insert_node(&node1, &node4, &node3);
    delete_node(&node1, &node4);
    return 0;
}

