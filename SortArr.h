using namespace std;

void SortArr(int Arr[], int size=10, int parametr = 1)
{
	for (int i = 1; i < size; ++i)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (Arr[j] < Arr[j + 1])
			{
				int temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
}