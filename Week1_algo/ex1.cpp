#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
// Thêm implement cho hàm reverse
SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *prev = nullptr;
    SinglyLinkedListNode *current = llist;
    SinglyLinkedListNode *next = nullptr;
    
    while (current != nullptr) {
        next = current->next;     // Lưu node kế tiếp
        current->next = prev;     // Đảo chiều link
        prev = current;           // Di chuyển prev
        current = next;           // Di chuyển current
    }
    return prev;                  // Trả về head mới
}

// Sửa main() để in ra terminal
int main() {
    int tests;
    cin >> tests;
    
    for (int tests_itr = 0; tests_itr < tests; tests_itr++) {
        SinglyLinkedList* llist = new SinglyLinkedList();
        
        int llist_count;
        cin >> llist_count;
        
        for (int i = 0; i < llist_count; i++) {
            int llist_item;
            cin >> llist_item;
            llist->insert_node(llist_item);
        }
        
        SinglyLinkedListNode* llist1 = reverse(llist->head);
        
        // In ra terminal
        while(llist1 != nullptr) {
            cout << llist1->data << " ";
            llist1 = llist1->next;
        }
        cout << endl;
        
        free_singly_linked_list(llist1);
    }
    return 0;
}
// link exam: https://www.geeksforgeeks.org/reverse-a-linked-list/