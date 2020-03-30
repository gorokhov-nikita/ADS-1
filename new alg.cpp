int cbinsearch(int* arr, int size, int value)
{
	int k=0, l=0;
	int left=0, right = size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == value)
		{
			k++;
			l=mid;
		}
		if (arr[mid] < value)
		{
			left = mid + 1;
		}
		if (arr[mid] > value)
		{
			right = mid - 1;
		}
	}
	if (k > 0)
	{
		k = 0;
		while(arr[l] == value)
		{
			k++;
			l++;
		}
	}
	return k;
}
