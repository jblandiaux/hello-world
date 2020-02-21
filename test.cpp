int length_nb(int number)
{
	int count;

	count = 0;
	while (number)
	{
		count++;
		number /= 10;
	}
	return count;
}
int max_digit(int number)
{
	int length_number = length_nb(number);
	int array[length_number];
	int max = 0;

	for (int i = 0; i< length_number; i++)
	{
		max = number;
		number /= 10;
	}
	return max;
}
bool greater_or_equal(int nb1, int nb2)
{
	int max1;
	int max2;

	max1 = max_digit(nb1);
	max2 = max_digit(nb2);

	if (max1 <= max2)
		return 1;
	return 0;
}
