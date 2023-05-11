//#pragma once
//#include<iostream>
//using namespace std;
//#include<string>
//template<class T>
//class myarry {
//public:
//	myarry(int capacity) {
//		this->m_capacity = capacity;
//		this->m_size = 0;
//		m_arryadress = new T[this->m_capacity]
//	}
//	myarry(const myarry&arr) {
//		this->m_capacity =arr.m_capacity;
//		this->m_size =arr.m_size;
//		this->m_arryadress = new T[this->m_capacity];
//		for (int i = 0; i < this->m_size; i++) {
//			this->m_arryadress[i] = arr.m_arryadress[i];
//		}
//	}
//	myarry operator=(const  myarry&arr) {
//		if (this->m_arryadress !=NULL) {
//			delete[] this->m_arryadress;
//			this->m_capacity =0;
//			this->m_size = 0;
//		}
//		this->m_capacity = arr.m_capacity;
//		this->m_size =arr.m_size;
//		this->m_arryadress =new T[this->m_capacity];
//		for (int i = 0; i <this->m_capacity; i++) {
//			this->m_arryadress[i] = arr[i];
//		}
//		return *this;
//	}
//	T endadd(const T val) {
//		if (this->m_capacity == this->m_size) {
//			return;
//	}
//		this->m_size[this->m_size] = val;
//		return;
//	}
//	void enddelete() {
//		if (this->m_size == 0) {
//			return;
//		}
//		this->m_size--;
//		return;
//	}
//	T& operator[](int index){
//
//		return this->m_size[index];
//	}
//	int getCapacity()
//	{
//		return this->m_Capacity;
//	}
//	int	getSize()
//	{
//		return this->m_Size;
//	}
//
//	~myarry() {
//		if (this->m_arryadress != NULL) {
//			delete[] this->m_arryadress;
//			this->m_arryadress = NULL;
//			this->m_capacity = 0;
//			this->m_size = 0;
//		}
//	}
//private:
//	T* m_arryadress;
//	int m_capacity;
//	int m_size;
//
//
//};
//
