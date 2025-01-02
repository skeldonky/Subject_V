
#ifndef SIMPLEVECTOR_CPP
#define SIMPLEVECTOR_CPP
#include <iostream>
#include <vector>
//��� ����
#include "SimpleVector.h"

using namespace std;

//������ 1 / �⺻�� 10
template <typename T>
SimpleVector<T>::SimpleVector() : currentCapacity(10), currentSize(0) {
	data = new int[10];
}

// ������ 2 ���ڸ� �Է¹޾� ũ�⸦ ���մϴ�.
template <typename T>
SimpleVector<T>::SimpleVector(int capacity) : currentCapacity(capacity), currentSize(0) {
	data = new int[capacity];
}

//�迭 ũ�� �� ����
template<typename T>
void SimpleVector<T>::resize()
{
}

//�迭 ���� �߰� (��á���� ����X)
template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (currentSize < currentCapacity)
	{
		data[currentSize] = value;
		currentSize++;
	}
	else {
		cout << "�迭�� ���� ���ֽ��ϴ�." << endl;
	}
}

//�迭 ������ ���� ���� (���� �� ���Ұ� ������ ����X)
template <typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0)
	{
		currentSize--;
	}
	else {
		cout << "�迭�� ����ֽ��ϴ�." << endl;
	}
}
//���� ������ ����
template <typename T>
int SimpleVector<T>::size() {
	cout << "[ ";
	for (int i = 0; i < currentSize; i++) {
		cout << data[i] << " ";
	}
	cout << "]" << endl;

	return currentSize;
}
//�迭�� �ִ� ũ��
template <typename T>
int SimpleVector<T>::capacity() {
	return currentCapacity;
}

//�Ҹ���
template<typename T>
SimpleVector<T>::~SimpleVector()
{
	delete[] data;
}
#endif // !SIMPLEVECTOR_CPP

//#pragma once
//#include <iostream>
//#include <vector>
////��� ����
//#include "SimpleVector.h"
//
//using namespace std;
//
////������ 1 / �⺻�� 10
//template <typename T>
//SimpleVector<T>::SimpleVector() : currentCapacity(10), currentSize(0) {
//	data = new T[10];
//}
//
//// ������ 2 ���ڸ� �Է¹޾� ũ�⸦ ���մϴ�.
//template <typename T>
//SimpleVector<T>::SimpleVector(int capacity) : currentCapacity(capacity), currentSize(0) {
//	data = new T[capacity];
//}
//
////�迭 ũ�� �� ����
//template<typename T>
//void SimpleVector<T>::resize()
//{
//}
//
////�迭 ���� �߰� (��á���� ����X)
//template<typename T>
//void SimpleVector<T>::push_back(const T& value)
//{
//	if (currentSize < currentCapacity)
//	{
//		data[currentSize] = value;
//		currentSize++;
//	}
//	else {
//		cout << "�迭�� ���� ���ֽ��ϴ�." << endl;
//	}
//}
//
////�迭 ������ ���� ���� (���� �� ���Ұ� ������ ����X)
//template <typename T>
//void SimpleVector<T>::pop_back() {
//	if (currentSize > 0)
//	{
//		data[currentSize] = nullptr;
//		currentSize--;
//	}
//	else {
//		cout << "�迭�� ����ֽ��ϴ�." << endl;
//	}
//}
////���� ������ ����
//template <typename T>
//int SimpleVector<T>::size() {
//	cout << "�迭�� ���� ũ��� : " << currentSize << endl;
//}
////�迭�� �ִ� ũ��
//template <typename T>
//int SimpleVector<T>::capacity() {
//	cout << "�迭�� �ִ� ũ��� : " << currentCapacity << endl;
//}
//
////�Ҹ���
//template<typename T>
//SimpleVector<T>::~SimpleVector()
//{
//	delete[] data;
//}
