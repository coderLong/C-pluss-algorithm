#include"head.h"
//���ֲ����㷨�����ֶ��Ŀ��ֵʱ�򷵻ص�һ���±�
int binarySearch(int A[], int n, int val)
{
	int first = 0;
	int end = n - 1;
	while (first <=end)
	{
		int mid = (first + end) / 2;
		if (A[mid] == val)
		{
			while (mid - 1>-1)
			{
				if (A[mid] == A[mid - 1])
					mid--;                 //ע��ÿ������µĽ�������߽�����Ĵ���
				if (A[mid]>A[mid - 1])
				{
					
					return mid;
				}
			}
			return mid;
		}
		if (A[mid]>val)
			end = mid - 1;
		if (A[mid]<val)
			first = mid + 1;
	}
	return -1;
}
