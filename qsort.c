int qsort(int a[],int begin,int end)
{
	if (begin > end) return ;

	int q = partion(a,begin,end);

	qsort(a,begin,q);

	qsort(a,q+1,end);

}

int partion(int a[],int begin, int end )
{
	int i = begin;
	int privot = a[end];
	//快排key点：遍历一遍，将大于privot的放到右边，小于privot的放到左边；
	for(int j=begin; j<end;j++)
	{
		if(a[j]<privot)
		{
			swap(a[i],a[j]);
			i++;
		}
	}

	swap(a[i],privot);
	return i;
}
