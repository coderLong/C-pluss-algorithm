#pragma once
# include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
struct node {
	int value;
	node* next;
};
int binarySearch(int A[], int n, int val); //���ֲ���
char findFisrtRepeatChar(string s, int n);//���ҵ�һ���ظ����ֵ��ַ�
node* revers_link_list(node* head);
void print_link_list(node* head);
void find_repeat_substr(string s); //����һ���ַ����������ظ����ִ�