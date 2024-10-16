#ifndef LIST_H
#define LIST_H 1


typedef struct List        List;
typedef struct ListNode    ListNode;
typedef struct ListPointer ListPointer;

struct ListPointer {
 ListNode* next;
 ListNode* forward;
};

struct ListNode {
  int src;
  ListPointer node;
};

struct List {
  ListNode* firstNode;
  ListNode* lastNode;

  void (*append)(List*, int);
  int  (*at)(List*, int);
};


void listInit(List* list);
void listAppend(List* list, int src);
int listAt(List* list, int at);


#endif // !define(LIST_H)