/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
/**
*    public class ListNode {
*        int val;
*        ListNode next = null;
*
*        ListNode(int val) {
*            this.val = val;
*        }
*    }
*
*/
//链表逆置
//法一 ：stack
//import java.util.ArrayList;
//import java.util.Stack;
//public class Solution {
//	public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
//		ArrayList<Integer> list = new ArrayList<>();
//		if (listNode == null)
//		{
//			return list;
//		}
//		Stack<Integer> st = new Stack<>();
//		while (listNode != null)
//		{
//			st.push(listNode.val);
//			listNode = listNode.next;
//		}
//		while (!st.empty())
//		{
//			list.add(st.pop());
//		}
//		return list;
//	}
//}

//法二： 递归
import java.util.ArrayList;
public class Solution {
	public void printListFromTailToHeadCore(ArrayList<Integer> list, ListNode listNode) {
		if (listNode == null)
			return;
		printListFromTailToHeadCore(list, listNode.next);
		list.add(listNode.val);
	}
	public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
		ArrayList<Integer> list = new ArrayList <>();
		printListFromTailToHeadCore(list, listNode);
		return list;
	}
}

