//T& operator[](size_t index) / const T& operator[](size_t index)cont
//at(��̫��)
//T& front() / const T& front()const
//T& back() / const T& back()const

//begin()/end()--->[begin,end) ���������
//rbegin() / rend()--->[rbegin, rend) ���������
//typedef T* iterator;
//auto it = v.begin(); //itʵ���Ѿ�ָ��vector�ײ�ռ����ʼλ��
//v.push_back(data);
//ͨ��it����������vector�е�Ԫ��--->���ܻ��������Ĳ�����

//������ʧЧ
//1.����ײ�ռ�ı�---push_back/insert resize/reserve swap assign 
//2.erase(pos)---pos�ĵ�����ʧЧ pos--->vector��ĳ������--->T���Ͷ���
//
//it�����ʱ��������ǰ�Ŀռ䣬��ԭ���Ŀռ��Ѿ��ͷţ�����ʧЧ
//�����������
//  �����������¸�ֵ
//  it = v.erase(it);