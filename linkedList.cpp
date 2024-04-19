using namespace std;
#include <bits/stdc++.h>

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_data->data = new data();
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node *previous_node, int new_data)
{

    if (previous_node == NULL)
    {
        cout << "given previous node can not be NULL";
        return;
    }
    Node *new_node = new Node();
    new_data->data = new data();
    new_node->next = previous_node->next;
    previous_node->next = new_node;
}

int main()
{

    return 0;
}
