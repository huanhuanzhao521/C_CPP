#pragma once
#include <iostream>

using namespace std;

template <typename T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        // cout << "MyArray ���вι������" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_capacity];
    }
    // ��������
    MyArray(const MyArray& arr)
    {
        // cout << "MyArray �Ŀ����������" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        // this->pAddress = arr.pAddress;
        // ���
        this->pAddress = new T[this->m_capacity];

        // ��arr�е����ݶ���������
        for (size_t i = 0; i < this->m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // operator=��ֹǳ��������
    MyArray& operator = (const MyArray& arr)
    {
        // cout << "MyArray ��operator =�ĵ���" << endl;
        // ���ж�ԭ�������Ƿ������ݣ���������ͷ�
        if (this->pAddress != nullptr) {
            delete[]this->pAddress;
            this->pAddress = nullptr;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        // ���
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];
        for (size_t i = 0; i < this->m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    // β�巨
    void Push_Back(const T& value)
    {
        // �ж������Ƿ���ڴ�С
        if (this->m_capacity == this->m_size) {
            cout << "������������" << endl;
            return;
        }
        this->pAddress[this->m_size] = value; // �������ĩβ��������
        this->m_size++;  // ���������С
    }

    // βɾ��
    void Pop_Back()
    {
        // ���û����ʲ������һ��Ԫ�أ���Ϊɾ�����߼��ϵ�ɾ��
        if (this->m_size == 0) {
            cout << "��������Ϊ��" << endl;
            return;
        }
        this->m_size--;
    }

    // ���û�����ͨ���±�ķ�ʽ���������е�Ԫ�� arr[0]=100;
    T& operator[](int index)
    {
        return this->pAddress[index];
    }

    // �������������
    int getCapacity()
    {
        return this->m_capacity;
    }

    // ��������Ĵ�С
    int getSize()
    {
        return this->m_size;
    }

    ~MyArray()
    {
        if (this->pAddress != nullptr) {
            // cout << "MyArray ��������������" << endl;
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_size = 0;
            this->m_capacity = 0;
        }
    }

private:
    T* pAddress; // ָ��ָ��������ٵ���ʵ����
    int m_capacity; // ��������
    int m_size; // �����С
    

};