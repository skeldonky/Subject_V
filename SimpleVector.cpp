
#ifndef SIMPLEVECTOR_CPP
#define SIMPLEVECTOR_CPP
#include <iostream>
#include <vector>
//헤더 참조
#include "SimpleVector.h"

using namespace std;

//생성자 1 / 기본값 10
template <typename T>
SimpleVector<T>::SimpleVector() : currentCapacity(10), currentSize(0) {
	data = new int[10];
}

// 생성자 2 숫자를 입력받아 크기를 정합니다.
template <typename T>
SimpleVector<T>::SimpleVector(int capacity) : currentCapacity(capacity), currentSize(0) {
	data = new int[capacity];
}

//배열 크기 재 선언
template<typename T>
void SimpleVector<T>::resize()
{
}

//배열 끝에 추가 (꽉찼으면 동작X)
template<typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (currentSize < currentCapacity)
	{
		data[currentSize] = value;
		currentSize++;
	}
	else {
		cout << "배열이 가득 차있습니다." << endl;
	}
}

//배열 마지막 원소 제거 (제거 할 원소가 없으면 동작X)
template <typename T>
void SimpleVector<T>::pop_back() {
	if (currentSize > 0)
	{
		currentSize--;
	}
	else {
		cout << "배열이 비어있습니다." << endl;
	}
}
//현재 원소의 개수
template <typename T>
int SimpleVector<T>::size() {
	cout << "[ ";
	for (int i = 0; i < currentSize; i++) {
		cout << data[i] << " ";
	}
	cout << "]" << endl;

	return currentSize;
}
//배열의 최대 크기
template <typename T>
int SimpleVector<T>::capacity() {
	return currentCapacity;
}

//소멸자
template<typename T>
SimpleVector<T>::~SimpleVector()
{
	delete[] data;
}
#endif // !SIMPLEVECTOR_CPP

//#pragma once
//#include <iostream>
//#include <vector>
////헤더 참조
//#include "SimpleVector.h"
//
//using namespace std;
//
////생성자 1 / 기본값 10
//template <typename T>
//SimpleVector<T>::SimpleVector() : currentCapacity(10), currentSize(0) {
//	data = new T[10];
//}
//
//// 생성자 2 숫자를 입력받아 크기를 정합니다.
//template <typename T>
//SimpleVector<T>::SimpleVector(int capacity) : currentCapacity(capacity), currentSize(0) {
//	data = new T[capacity];
//}
//
////배열 크기 재 선언
//template<typename T>
//void SimpleVector<T>::resize()
//{
//}
//
////배열 끝에 추가 (꽉찼으면 동작X)
//template<typename T>
//void SimpleVector<T>::push_back(const T& value)
//{
//	if (currentSize < currentCapacity)
//	{
//		data[currentSize] = value;
//		currentSize++;
//	}
//	else {
//		cout << "배열이 가득 차있습니다." << endl;
//	}
//}
//
////배열 마지막 원소 제거 (제거 할 원소가 없으면 동작X)
//template <typename T>
//void SimpleVector<T>::pop_back() {
//	if (currentSize > 0)
//	{
//		data[currentSize] = nullptr;
//		currentSize--;
//	}
//	else {
//		cout << "배열이 비어있습니다." << endl;
//	}
//}
////현재 원소의 개수
//template <typename T>
//int SimpleVector<T>::size() {
//	cout << "배열의 현재 크기는 : " << currentSize << endl;
//}
////배열의 최대 크기
//template <typename T>
//int SimpleVector<T>::capacity() {
//	cout << "배열의 최대 크기는 : " << currentCapacity << endl;
//}
//
////소멸자
//template<typename T>
//SimpleVector<T>::~SimpleVector()
//{
//	delete[] data;
//}
