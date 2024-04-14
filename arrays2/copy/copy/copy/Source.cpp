// copy() takes two arrays of doubles along with their sizes
// It copies all the elements from src to dst, but not more than dst size
// It returns the number of elements copyed
int copy(double src[], size_t src_size, double dst[], size_t dst_size)
{
	int count = 0;
	for (int i = 0; i < src_size && i < dst_size; i++)
	{
		dst[i] = src[i]; 
		count++;
	}
	return count;
}