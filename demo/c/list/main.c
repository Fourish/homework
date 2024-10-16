#include <stdio.h>

#include "list.h"

int main() {
  List list;
  listInit(&list);

  list.append(&list, 0);
  list.append(&list, 1);
  list.append(&list, 2);
  list.append(&list, 3);

  printf("list[%d] = %d", 0, list.at(&list, 0));
  printf("list[%d] = %d", 1, list.at(&list, 1));
  printf("list[%d] = %d", 2, list.at(&list, 2));
  printf("list[%d] = %d", 3, list.at(&list, 3));

  return 0;
}