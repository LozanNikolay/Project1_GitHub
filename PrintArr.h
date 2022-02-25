

using namespace std;


void PrintArr(int Arr[],int size = 10,int parametr = 1)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 10;
		cout << Arr[i] << "\t";
	}
	cout << endl << endl;
}
