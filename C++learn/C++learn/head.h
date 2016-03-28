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
int binarySearch(int A[], int n, int val); //二分查找
char findFisrtRepeatChar(string s, int n);//查找第一个重复出现的字符
node* revers_link_list(node* head);
void print_link_list(node* head);
void find_repeat_substr(string s); //查找一个字符串中所有重复的字串