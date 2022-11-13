#pragma once
#include <iostream>

using namespace std;

template <typename T>
class MyArray
{
public:
    MyArray(int capacity)
    {
        // cout << "MyArray 的有参构造调用" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->pAddress = new T[this->m_capacity];
    }
    // 拷贝构造
    MyArray(const MyArray& arr)
    {
        // cout << "MyArray 的拷贝构造调用" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        // this->pAddress = arr.pAddress;
        // 深拷贝
        this->pAddress = new T[this->m_capacity];

        // 将arr中的数据都拷贝过来
        for (size_t i = 0; i < this->m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    // operator=防止浅拷贝问题
    MyArray& operator = (const MyArray& arr)
    {
        // cout << "MyArray 的operator =的调用" << endl;
        // 先判断原来堆区是否有数据，如果有先释放
        if (this->pAddress != nullptr) {
            delete[]this->pAddress;
            this->pAddress = nullptr;
            this->m_capacity = 0;
            this->m_size = 0;
        }
        // 深拷贝
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->pAddress = new T[arr.m_capacity];
        for (size_t i = 0; i < this->m_size; i++) {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    // 尾插法
    void Push_Back(const T& value)
    {
        // 判断容量是否等于大小
        if (this->m_capacity == this->m_size) {
            cout << "数组容量已满" << endl;
            return;
        }
        this->pAddress[this->m_size] = value; // 在数组的末尾插入数据
        this->m_size++;  // 更新数组大小
    }

    // 尾删法
    void Pop_Back()
    {
        // 让用户访问不到最后一个元素，即为删除，逻辑上的删除
        if (this->m_size == 0) {
            cout << "数组容量为空" << endl;
            return;
        }
        this->m_size--;
    }

    // 让用户可以通过下标的方式访问数组中的元素 arr[0]=100;
    T& operator[](int index)
    {
        return this->pAddress[index];
    }

    // 返回数组的容量
    int getCapacity()
    {
        return this->m_capacity;
    }

    // 返回数组的大小
    int getSize()
    {
        return this->m_size;
    }

    ~MyArray()
    {
        if (this->pAddress != nullptr) {
            // cout << "MyArray 的析构函数调用" << endl;
            delete[] this->pAddress;
            this->pAddress = nullptr;
            this->m_size = 0;
            this->m_capacity = 0;
        }
    }

private:
    T* pAddress; // 指针指向堆区开辟的真实数组
    int m_capacity; // 数组容量
    int m_size; // 数组大小
    

};