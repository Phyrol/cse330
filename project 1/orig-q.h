//
// Created by fer on 2/9/17.
//

#ifndef PROJECT1_Q_H
#define PROJECT1_Q_H
#import <stdlib.h>

struct q_element {
    struct q_element *prev;
    struct q_element *next;
    int payload;
} *first, *last;

struct q_element *NewItem();                                     
void InitQueue(struct q_element **newHead);                         
void AddQueue(struct q_element **head, struct q_element *item);
struct q_element *DelQueue(struct q_element **head);
void RotateQ(struct q_element **head);

int count;

struct q_element *NewItem() {
	struct q_element *q;
	q = malloc(sizeof(struct q_element*));
	return q;
}

void InitQueue(struct q_element **newHead) {
	first = *newHead;
	count = 0;
}

void AddQueue(struct q_element **head, struct q_element *item)
{
	if(count == 0) {
	*head = item;

	(*head)->prev = *head;
	last = (*head)->prev;

	(*head)->next = *head;
	first = *head;
	}
	else {
	last->next = item;
	item->prev = last;
        last = item;
	}

	first->prev = last;
	last->next = first;
	count++;
}

struct q_element *DelQueue(struct q_element **head)
{
	struct q_element *temp;
	temp = *head;
	*head = (*head)->next;
	first = *head;
	first->prev = last;
	last->next = first;
		
	count--;
	return temp;
}

void RotateQ(struct q_element **head)
{
	AddQueue(head, DelQueue(head));
}

#endif //PROJECT1_Q_H
