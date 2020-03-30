int cbinsearch(int* arr, int size, int value)
{
int k = 0;
int left = 0, right = size, mid = (left + size) / 2;
while (left <= right)
{
if (arr[mid] == value)
{
k += 1;
break;
}
if (arr[mid] < value)
{
left = mid + 1;
mid = (left + right) / 2;
}
if (arr[mid] > value)
{
right = mid - 1;
mid = (left + right) / 2;
}
}
int shift = 1;
while ((mid - shift >= 0) && (arr[mid - shift] == value))
{
k++;
shift++;
}
shift = 1;
while ((mid + shift <= size) && (arr[mid + shift] == value))
{
k++;
shift++;
}
return k;
}
