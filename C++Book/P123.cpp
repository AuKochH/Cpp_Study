//////////////////////////////////////////////////////////
//	�����鰴�෴˳���ţ�����һ��Ԫ�غ����һ��Ԫ�ػ�����
//	�Դ��������м�Ԫ��Ϊֹ
//////////////////////////////////////////////////////////

//2018.6.24 19:26 ��������

#include <iostream>

using namespace std;

//�õ����鳤�Ⱥ���
template <class T>
int getLength(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}

//����
void MyReverse(int *array)
{
	int *p, temp, *i, *j, m = (getLength(array) - 1) / 2;

	i = array; j = array + getLength(array) - 1; p = array + m;

	for (; i <= p; i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}

int main()
{
	int myArray[10] = { 3, 5, 7, 8, 12, 31, 52, 64, 24, 10 };

	cout << "ԭʼ������Ϊ��" << endl;
	for each (int i in myArray)
	{
		cout << i << ",";//����ֱ����i+","
	}
	cout << endl << endl;

	MyReverse(myArray);

	cout << "�����������Ϊ��" << endl;
	for each (int i in myArray)
	{
		cout << i << ",";
	}
	cout << endl;

	int i;
	cin >> i;
	return 0;
}