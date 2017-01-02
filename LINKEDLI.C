/*Program to Implement Operations on a singly linked list*/
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <stdlib.h>
#define MAXCOUNT 100
#define OK 1
#define ERROR 0

typedef struct LnkdLst{
 int value, sl_no;
 struct LnkdLst *next;
}Linked;
Linked *LinkedList;

int CreateList(int num_nodes){
 int i;
 Linked *ptr_curr, *ptr_next;
 LinkedList->next = NULL;
 ptr_curr = LinkedList;

   if(num_nodes){
     for(i=0; i<num_nodes; i++){
       ptr_next = (Linked*) malloc(sizeof(Linked));
       ptr_next->value = rand();
       ptr_next->sl_no = i;
       ptr_next->next = NULL;
       /*printf("\ncreated new node");*/
       ptr_curr->next = ptr_next;
       ptr_curr = ptr_next;
       if(LinkedList==NULL){
	LinkedList = ptr_next;
       }
       else if(LinkedList->next==NULL){
	LinkedList->next = ptr_next;
       }
       /*printf("\nLinkedList value:%d", ptr_next->value);*/
     }
   }
   return OK;
}

/*int GetLoc(int);
int GetAfter(int, Linked*);
int GetBefore(int, Linked*);
int InsertAfter(int, Linked*);
int UpdateItem(int, Linked*);
int UpdateAfter(int, Linked*);
int UpdateBefore(int, Linked*);
int InsertBefore(int, Linked*);
int DeleteAfter(int, Linked*);
int DeleteBefore(int, Linked*);
int InplaceSort(Linked*);
int CopySort(Linked*);
int FindValPos()*/

int DisplayList(){
 Linked *ptr_trav=LinkedList;
 int i_count=0;
 while(ptr_trav!=NULL){
   printf("%d",ptr_trav->value);
   i_count++;
   if(ptr_trav->next!=NULL){
      printf("->");
   }
 }
 return i_count;
}

int main (void){
 Linked* list;
 int length, ret_val;
 clrscr();
 length = DisplayList();
 printf("\nLength before creation:%d",length);
 CreateList(10);
 length = DisplayList();
 printf("\nLength after creation:%d",length);
 length = findLen(list);
 getch();
 return 0;
}

int findLen(){
 int i;
 Linked *ptr;
 i=0;
   if(LinkedList == NULL){
     printf("Linked List is null");
     return 0;
   }
   else{
     ptr = LinkedList->next;
     while(ptr!=NULL){
       printf("%d\t",ptr->value);
       ptr = ptr->next;
       i++;
     }
   }
  return i;
}