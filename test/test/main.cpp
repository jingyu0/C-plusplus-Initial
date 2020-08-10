//��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
//����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
//��������{ 3, 4, 5, 1, 2 }Ϊ{ 1, 2, 3, 4, 5 }��һ����ת�����������СֵΪ1��
//NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��

//�������⣬������ʵ��һ������Сֵ����
//����һ�������ϣ�����һ�μ��ɣ��������ǿ��Ը�������ʹ����΢��Ч�Ҹ���һ�������
//����Ҫ��Ҫô��һ���ǵݼ���������飨��Сֵ���ʼ����Ҫô��һ����ת(��Сֵ���м�ĳ���ط�)
//���ң���ת֮���и������������ڱ�����ʱ��ԭʼ�����Ƿǵݼ��ģ���ת֮�󣬾��п��ܳ��ֵݼ�������
//�ݼ������֣�������Сֵ

//�����������ö��ֲ��ҵķ�ʽ�����ж�λ
//������β�±꣬��Ϊ�Ƿǵݼ�������ת��������ת�����Կ����������֣�ǰ�벿������ǵݼ�����벿��
//����ǵݼ���ǰ�벿��������ں�벿�֡�
//���ԣ����Ǽ������¶��壬leftָ������࣬rightָ�����Ҳ࣬midΪ����֮����м�λ�á�
//��a[mid] > a[left],˵��midλ����ԭ����ǰ�벿�֣���һ��˵����Ŀ����Сֵ����mid���Ҳ࣬��
//left = mid
//a[mid] < a[left], ˵��midλ����ԭ�����벿�֣���һ��˵����Ŀ����Сֵ����mid����࣬��
//right = mid
//������̣�����[left, right]������С
//��������У�left��Զ��ԭ����ǰ�벿�֣�right��Զ��ԭ����ĺ�벿�֣�����Χ��һֱ��С
//��left��right����ʱ��rightָ���λ�ã�������СԪ�ص�λ��
//���ǣ���Ϊ��Ŀ˵���Ƿǵݼ���Ҳ����ζ�����������ظ�����Ϊ���ظ������Ϳ��ܻ���a[left] ==
//a[mid] == a[right]����������Ǿ��޷��ж�������mid��໹���Ҳࡣ��ע�⣬ֻҪ�����߲���ȣ���
//�Ǿ����ж�Ӧ�������С��Χ��


//����һ
import java.util.ArrayList;
public class Solution {
	public int minNumberInRotateArray(int[] array) {
		if (array == null || array.length == 0){
			return 0;
		}
		for (int i = 0; i < array.length - 1; i++){
			if (array[i] > array[i + 1]){
				return array[i + 1];
			}
		}
		6. ���Ŀ��㣺�ռ临�Ӷȣ�fib��⣬��֦�ظ�����
			��Ҷ�֪��쳲��������У�����Ҫ������һ������n���������쳲��������еĵ�n���0��ʼ����0
			��Ϊ0����1����1����
			n <= 39
			������
			return array[0];
	}
}

//������
import java.util.ArrayList;
public class Solution {
	public int minNumberInRotateArray(int[] array) {
		if (array == null || array.length == 0){
			return 0;
		}
		int left = 0;
		int right = array.length - 1;
		int mid = 0;
		while (array[left] >= array[right]){
			if (right - left == 1){
				mid = right;
				break;
			}
			mid = left + ((right - left) >> 1);
			if (array[left] == array[right] && array[mid] == array[left]){ //1
				int result = array[left];
				for (int i = left + 1; i < right; i++){
					if (array[i] < result){
						result = array[i];
					}
				}
				return result;
			}
			if (array[mid] >= array[left]){
				//˵��mid��ԭ�����ǰ�벿��
				//���array[mid] == array[left]�� ����1����������������array[left]
				>= array[right]����array[mid] > array[right]
					left = mid;
			}
			else{
				right = mid;
			}
		}
		return array[mid];
	}
}