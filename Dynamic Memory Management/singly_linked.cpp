#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *start = NULL;
void create(node *head, int value)
{
    node *temp, *ptr;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "Error !" << endl;
    }
    else
    {
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
}
void show(node *head)
{
    node *traverse = NULL;
    int i = 1;
    traverse = head;
    while (traverse != NULL)
    {
        cout << "Data " << i << " : " << traverse->data << endl;
        i++;
        traverse = traverse->next;
    }
}
int main()
{
    int data, n;
    cout << "Enter how many data you want to store : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value " << i + 1 << " : " << endl;
        cin >> data;
        create(start, data);
    }
    show(start);
    return 0;
}