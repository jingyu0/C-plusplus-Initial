//找出数组中和为目标值的两个数 
#include<iostream>
using namespace std;


/**
 * 首先想到的肯定是拿第一个元素与后面的依次加，看是否等于目标值，
 * 然后再第二个、第三个...
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
        // 定义返回值：back[];
        int[] back = new int[2];
        // 双层for循环遍历原数组，每次拿到两个数并判断条件满足与否
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
 * 把数值作为 key，它的下标作为 value
 * 遍历数组，判断 map 是否含有这个目标值-当前数值，
 * 有直接返回，没有的话放到map里面
 *
 * 所以以后写代码，如果有双层 for 循环，首先考虑一下能否用 map 替换一层
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





















