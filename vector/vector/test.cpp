//T& operator[](size_t index) / const T& operator[](size_t index)cont
//at(不太用)
//T& front() / const T& front()const
//T& back() / const T& back()const

//begin()/end()--->[begin,end) 正向迭代器
//rbegin() / rend()--->[rbegin, rend) 正向迭代器
//typedef T* iterator;
//auto it = v.begin(); //it实际已经指向vector底层空间的起始位置
//v.push_back(data);
//通过it迭代器访问vector中的元素--->可能会引起代码的不崩溃

//迭代器失效
//1.如果底层空间改变---push_back/insert resize/reserve swap assign 
//2.erase(pos)---pos的迭代器失效 pos--->vector中某个对象--->T类型对象
//
//it储存的时插入扩容前的空间，而原来的空间已经释放，所以失效
//解决迭代器：
//  给迭代器重新赋值
//  it = v.erase(it);