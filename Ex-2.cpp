//�ҳ������к�ΪĿ��ֵ�������� 
#include<iostream>
using namespace std;


/**
 * �����뵽�Ŀ϶����õ�һ��Ԫ�����������μӣ����Ƿ����Ŀ��ֵ��
 * Ȼ���ٵڶ�����������...
 */
 /*
int[] twoSum1(int[] nums, int target) {
    for (int i = 0; i < nums.length - 1; i++) {
        for (int j = i + 1; j < nums.length; j++) {
            if (nums[j] == target - nums[i]) {
                return new int[] {i, j};
            }
        }
    }
    return new int[]{0,0};
}

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        // ���巵��ֵ��back[];
        int[] back = new int[2];
        // ˫��forѭ������ԭ���飬ÿ���õ����������ж������������
        int i;
        int j;
        for (i = 0; i < nums.length - 1; i++) {
            for (j = i + 1; j < nums.length; j++) {
                if (target == nums[i] + nums[j]) {
                    back[0] = nums[i];
                    back[1] = nums[j];
                    return back;
                }

            }

        }
        return null;

    }

}
*/

/**
 * ����ֵ��Ϊ key�������±���Ϊ value
 * �������飬�ж� map �Ƿ������Ŀ��ֵ-��ǰ��ֵ��
 * ��ֱ�ӷ��أ�û�еĻ��ŵ�map����
 *
 * �����Ժ�д���룬�����˫�� for ѭ�������ȿ���һ���ܷ��� map �滻һ��
 */
 /*
int[] twoSum2(int[] nums, int target) {
    Map<Integer, Integer> map = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
        if (map.containsKey(target - nums[i])) {
            return new int[]{map.get(target - nums[i]),i};
        }
        map.put(nums[i], i);
    }
    return new int[]{0,0};
}
*/





















