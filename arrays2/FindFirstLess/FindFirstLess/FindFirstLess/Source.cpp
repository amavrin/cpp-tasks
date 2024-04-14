// find_first_less() takes an ordered descending array, find the first element
// less than the last argument and return its index
// if there is no such element, it returns -1
int find_first_less(int array[], size_t size, int x)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] < x)
		{
			return i;
		}
	}
	return -1;
}