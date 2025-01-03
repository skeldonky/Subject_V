#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

template <typename T>
class SimpleVector
{
protected:
	T* data;				//동적배열
	int currentSize;		//현재 배열의 크기
	int currentCapacity;	//현재 최대 크기

public:
	//생성자
	SimpleVector();
	SimpleVector(int capacity);
	//정수가 현재배열의 크기보다 작으면 동작X, 만약 배열의 크기보다 크면 해당 값 만큼 크기를 재 할당.
	void resize();
	//배열 끝에 추가 (꽉찼으면 동작X)
	void push_back(const T& value);
	//배열 마지막 원소 제거 (제거 할 원소가 없으면 동작X)
	void pop_back();
	//현재 원소의 개수
	int size();
	//배열의 크기
	int capacity();

	//소멸자
	~SimpleVector();
};

#include "SimpleVector.cpp"
#endif // !SIMPLEVECTOR_H
