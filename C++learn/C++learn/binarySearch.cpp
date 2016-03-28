#include"head.h"
//二分查找算法，出现多个目标值时候返回第一个下标
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
					mid--;                 //注意每种情况下的结果处理，边界情况的处理
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
