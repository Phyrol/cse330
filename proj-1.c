#import "q.h"
#import <stdlib.h>
#import <stdio.h>

int main() 
{

	struct q_element *item, *test, *testq, *current;
	struct q_element *item1, *test1, *testq1, *current1;
	struct q_element *item2, *test2, *testq2, *current2;
	struct q_element *iterator;

	int i = 0;

	item = NewItem();
	item->payload = 1;
	InitQueue(&item);
	AddQueue(&item, item);

	test = NewItem();
	test->payload = 2;
	AddQueue(&item, test);
	
	testq = NewItem();
	testq->payload = 3;
	AddQueue(&item, testq);

	printf("head: %d\n", item->payload);
	
	i = 0;
	iterator = item;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item);
	printf("head: %d\n", item->payload);

	i = 0;
	iterator = item;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item);
	printf("head: %d\n", iterator->payload);
	
	i = 0;
	iterator = item;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	DelQueue(&item);
	printf("\nHead was deleted.\n");
	i = 0;
	iterator = item;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	printf("\nNEW QUEUE\n\n");

	item1 = NewItem();
	item1->payload = 5;
	InitQueue(&item1);
	AddQueue(&item1, item1);

	test1 = NewItem();
	test1->payload = 6;
	AddQueue(&item1, test1);
	
	testq1 = NewItem();
	testq1->payload = 7;
	AddQueue(&item1, testq1);

	printf("head: %d\n", item1->payload);
	
	i = 0;
	iterator = item1;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item1);
	printf("head: %d\n", item1->payload);

	i = 0;
	iterator = item1;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item1);
	printf("head: %d\n", iterator->payload);
	
	i = 0;
	iterator = item1;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	DelQueue(&item1);
	printf("\nHead was deleted.\n");
	i = 0;
	iterator = item1;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	printf("\nNEW QUEUE\n\n");

	item2 = NewItem();
	item2->payload = 8;
	InitQueue(&item2);
	AddQueue(&item2, item2);

	test2 = NewItem();
	test2->payload = 9;
	AddQueue(&item2, test2);
	
	testq2 = NewItem();
	testq2->payload = 0;
	AddQueue(&item2, testq2);

	printf("head: %d\n", item2->payload);
	
	i = 0;
	iterator = item2;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item2);
	printf("head: %d\n", item2->payload);

	i = 0;
	iterator = item2;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	RotateQ(&item2);
	printf("head: %d\n", iterator->payload);
	
	i = 0;
	iterator = item2;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}

	DelQueue(&item2);
	printf("\nHead was deleted.\n");
	i = 0;
	iterator = item2;
	while(i < 10)
	{
		printf("payload: %d\n", iterator->payload);
		iterator = iterator->next;
		i++;
	}
		
	return 0;
}
