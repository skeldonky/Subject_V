#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

template <typename T>
class SimpleVector
{
protected:
	T* data;				//�����迭
	int currentSize;		//���� �迭�� ũ��
	int currentCapacity;	//���� �ִ� ũ��

public:
	//������
	SimpleVector();
	SimpleVector(int capacity);
	//������ ����迭�� ũ�⺸�� ������ ����X, ���� �迭�� ũ�⺸�� ũ�� �ش� �� ��ŭ ũ�⸦ �� �Ҵ�.
	void resize();
	//�迭 ���� �߰� (��á���� ����X)
	void push_back(const T& value);
	//�迭 ������ ���� ���� (���� �� ���Ұ� ������ ����X)
	void pop_back();
	//���� ������ ����
	int size();
	//�迭�� ũ��
	int capacity();

	//�Ҹ���
	~SimpleVector();
};

#include "SimpleVector.cpp"
#endif // !SIMPLEVECTOR_H
