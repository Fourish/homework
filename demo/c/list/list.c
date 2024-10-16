#define NDEBUG

#include "list.h"

#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

#define nullptr ((void*)0)

void listInit(List* list) {
  // init list equal nullptr
  list->firstNode = nullptr;
  list->lastNode  = nullptr;

  // init func pointer
  list->append = &listAppend;
  list->at     = &listAt;
}

void listAppend(List* list, int src) {
  // init node
  ListNode* node = (ListNode*)malloc(sizeof(ListNode));
  node->src = src;
  node->node.forward = list->lastNode;
  node->node.next    = nullptr;

  // append node to list
  if(list->firstNode == nullptr) {
    list->firstNode = node;
    list->lastNode  = node;
  } else {
    list->lastNode->node.next = node;
    list->lastNode            = node;
  }
}

int listAt(List* list, int at) {
  assert(list->firstNode != nullptr);

  ListNode* currentNode = list->firstNode;
  for(int i = 0; i < at; i++) {
    assert(currentNode->node.next != nullptr);
    currentNode = currentNode->node.next;
  }

  return currentNode->src;
}