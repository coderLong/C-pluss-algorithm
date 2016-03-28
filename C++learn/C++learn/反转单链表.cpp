#include"head.h"
void print_link_list(node* head)
{
	while (head != NULL)
	{
		cout << head->value << ' ';
		head = head->next;
	}
	cout << endl;
}
node* revers_link_list(node* head)
{
	print_link_list(head);
	node* pre = NULL;
	node* pnext = NULL;
	while (head != NULL)
	{
		pnext = head->next;
		head->next = pre;
		pre = head;
		head = pnext;
	}
	return pre;
}