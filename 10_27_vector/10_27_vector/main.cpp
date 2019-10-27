//vector的应用与模拟实现
#include <vector>
#include<stdlib.h>
#include <algorithm>
#include<iostream>
#include<assert.h>
using namespace std;

namespace sunny
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
	public:
		//空对象构造
		vector()
			: _start(nullptr)
			, _finish(nullptr)
			, _endOfStorage(nullptr)
		{ }

		//n个参数为元素的构造
		vector(size_t n, const T& data = T())
			:_start(new T[n])
			, _finish(_start+n)
			, _endOfStorage(_finish)
		{
			for (size_t i = 0; i < n; i++)
				_start[i] = data;
		}

		//一段区间的构造
		vector(T* first, T* last)
		{
			size_t size = last - first;
			_start = new T[size];
			for (size_t i = 0; i < size; ++i)
			{
				_start[i] = first[i];
			}

			_finish = _endOfStorage = _start + size;
		}

		//拷贝构造
		vector(const vector<T>& v)
		{
			size_t size = v.size();
			_start = new T[size];
			for (size_t i = 0; i < size; ++i)
			{
				_start[i] = v[i];
			}
			_finish = _endOfStorage = _start + size;
		}

		//复制运算符的重载
		//vector<T>& operator= (const vector<T>& v);

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endOfStorage = nullptr;
			}
		}

		////////////////////////////////////////////////////////
		//iterator
        iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}

		//////////////////////////////////////////////////
		//与容量相关的操作 capacity
		size_t size()const
		{
			return _finish - _start;
		}

		size_t capacity()const
		{
			return _endOfStorage - _start;
		}

		bool empty()const
		{
			return _start == _finish;
		}

		void resize(size_t newSize, const T& data = T())
		{
			size_t oldSize = size();
			if (newSize <= oldSize)
				//容量需要缩小
				_finish = _start + newSize;
			else
			{
				size_t oldcapacity = capacity();
				if (newSize>= oldcapacity)
				{
					reserve(newSize);
				}

				for (size_t i = oldSize; i < newSize; ++i)
					*_finish++ = data;
			}
		}

		void reserve(size_t newCapacity)
		{
			size_t oldCapacity = capacity();
			if (newCapacity>oldCapacity)
				//需要扩容
			{
				//申请新空间
				T* temp = new T[newCapacity];
				if (_start)
				{
					size_t originSize = size();
					//拷贝元素
					for (size_t i = 0; i < originSize; ++i)
						temp[i] = _start[i];

					//释放旧空间
					delete[] _start;
					//更新当前成员变量
					_start = temp;
					_finish = _start + originSize;
					_endOfStorage = _start + newCapacity;
				}
			}
		}

		///////////////////////////////////////////////////////////
		//acess
		//元素访问的操作
		T& operator[](size_t index)
		{
			assert(index < size());
			return _start[index];
		}

		const T& operator[](size_t index)const
		{
			assert(index < size());
			return _start[index];
		}

		T& front()
		{
			return _start[0];
		}

		const T& front()const
		{
			return _start[0];
		}

		T& back()
		{
			return *(_finish - 1);
		}

		const T& back()const
		{
			return *(_finish - 1);
		}

		//////////////////////////////////////////////////
		//modify
		void push_back(const T& data)
		{
			if (_finish == _endOfStorage)
				reserver(2 * capacity());

			*_finish++ = data;
		}

		void pop_back()
		{
			if (_start == _finish)
				return;

			--_finish;
		}

		iterator insert(iterator pos, const T& data)
		{
			size_t index = pos - _start;
			if (_finish == _endOfStorage)
				reserve(2 * capacity());

			//将size_t i改为int，以防size=0时造成死循环
			for (int i = size()-1; i >= pos - _start; --i)
				_start[i + 1] = _start[i];

			_start[index] = data;
			_finish++;
			return _start + index;
		}

		iterator erase(iterator pos)
		{
			iterator cur = pos;
			iterator curNext = cur + 1;
			while (curNext != _finish)
			{
				*cur++ = *curNext++;
			}
			--_finish;
			return pos;
		}

		void clear()
		{
			_finish = _start;
		}

		void swap(vector<T>& v)
		{
			swap(_start, v._start);
			swap(_finish, v._finish);
			swap(_endOfStorage, v._endOfStorage);
		}
	
	private:
		T* _start;
		T* _finish;
		T* _endOfStorage;
	};
}

void PrintVector(sunny::vector<int>& v)
{
	auto it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}
int main()
{
#if 0
	sunny::vector<int> v1;
	sunny::vector<int> v2(10,5);
	PrintVector(v2);

	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	sunny::vector<int> v3(array, array + sizeof(array)/sizeof(array[0]));
	PrintVector(v3);
	sunny::vector<int> v4(v3);
	PrintVector(v4);
#endif
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	sunny::vector<int> v(array, array + sizeof(array) / sizeof(array[0]));
	PrintVector(v);

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(3);
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	//增加为六个元素，多出的三个默认为6
	v.resize(6, 6);
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(9);
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.resize(20,6);
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	cout << v[10] << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;

	v.insert(v.begin(), 0);
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.erase(v.begin());
	PrintVector(v);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.clear();

	system("pause");
	return 0;
}