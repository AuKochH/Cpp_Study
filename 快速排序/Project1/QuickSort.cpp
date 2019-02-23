////////////////////////////////////////////////////////////
//
//	��������
//
//	��ð������ĸĽ���
//
//	���ʱ�临�Ӷ�ΪO(Nƽ��)
//	ƽ��ʱ�临�Ӷ�ΪO(Nlog2(N))
//
//	ͨ��һ�ֵ��������з�Ϊ�����������֣��ұ߲��־�����ߴ�
//	�ظ��������裬�����в��Ϸָ�Դﵽ����
//	�����Ѿ��ֿ���������Ԫ�ز���Ҫ�ٽ��бȽ�
//	�ʼ����˱Ƚϴ���������������ʱ��
//	
//	�������������������ֵͬ�����λ�ÿ��ܻᷢ���ı�
//	���Կ���������һ�ֲ��ȶ�����
//	
////////////////////////////////////////////////////////////

#include<iostream>
#include<vector>

using namespace std;

//Ҫ����������ʹ��
void quickSort(vector<int>& v, int left, int right);

void main()
{
	vector<int> v = { 9, 2, 24, -3, 4, 11, 0, 5 };

	//����ǰ
	for (int i : v)	cout << i << ends;

	//��������
	cout << endl << endl;

	quickSort(v, 0, v.size() - 1);

	//�����
	for (int i : v)	cout << i << ends;

	//��ֹ������ʧ
	getchar();
}

void quickSort(vector<int>& v, int originLeft, int originRight)
{
	int left = originLeft;
	int right = originRight;

	if (originLeft < originRight)
	{
		int base = v[left];

		while (left != right)
		{
			while (right > left && v[right] >= base) right--;
			v[left] = v[right];
			while (right > left && v[left] <= base) left++;
			v[right] = v[left];
		}

		v[left] = base;

		quickSort(v, originLeft, left - 1);
		quickSort(v, right + 1, originRight);
	}
}