//归并排序，时间复杂度 nlog(n); 下面是伪代码，高手理解思路就可以了，初学者才写一遍可执行的代码；

#include <stdion.h>

int merger_and(A[begin...end], A[begin...middle], A[middle+1...end]);
{
	int tmp=a[begin...end];
	int tmp_flag =0;
	for(i=begin,j=middle+1;i<middle or j<end;)
	{
		if(a[i]<a[j])
		{
			tmp[tmp_flag] = a[i];
			i++;
		}
		else 
		{
			tmp[tmp_flag] = a[j];
			j++;
		}
		tmp_flag ++;
	}

	if(i<middle)
	{
		tmp[tmp_flag] += a[i...middle];
	}

	if(j<end)
	{
		tmp[tmp_flag] +=a[j....end];
	}
}

int merge_sort ( int a[], int begin ,int end)
{
	if(begin >= end) return ;
	
	int middle = (begin + end )/2;

	merge_sort(a, begin, middle);
	merge_sort(a, middle, end );

	// 将 A[p...q] 和 A[q+1...r] 合并为 A[p...r]
	merger_and(A[begin...end], A[begin...middle], A[middle+1...r]);
}


int merger_all (int a[], int n)
{
	merge_sort(a,0,n-1);
	
}




int main()
{

	int a[10] = (0,4,5,2,8,9,20,11,24,5,6,7);

	merger_all(a,10);

	print(a[10]);
}



