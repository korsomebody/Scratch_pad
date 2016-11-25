#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_INT 512

struct queue_node
{
  int val;
  struct queue_node *next;
  struct queue_node *prev;
} queue_node;

struct queue
{
  struct queue_node *head;
  struct queue_node *tail;
} queue;

int graph[MAX_INT][MAX_INT] = {{0}};
int parent[MAX_INT] = {-1};
int key[MAX_INT] = {-1};
int adj[MAX_INT] = {-1};

int adj_top = 0;


queue *init_q()
{
  struct queue *temp;
  temp = malloc(sizeof(struct queue));
  
  temp->head = NULL;
  temp->tail = NULL;
  
  return temp;
}

void free_q(struct queue **q_ptr)
{
  struct q_node *temp1;
  struct q_node *temp2;
  temp1 = (*q_ptr)->head;
  
  while(temp1){
    temp2 = temp1;
    temp1 = temp->next;
    free(temp2);
  }
  free(temp1);
}

