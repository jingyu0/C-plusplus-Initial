//# endif
////第三题
//
//int main()
//{
//
//	vector<vector<int>> res;
//	int num, m;
//	cin >> num >> m;
//	set<int> tmp;
//	int a, b;
//	cin >> a >> b;
//	tmp.insert(a);
//	tmp.insert(b);
//	int count = 1;
//	for (int i = 1; i<num; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		set<int>::iterator it1 = tmp.find(a);
//		set<int>::iterator it2 = tmp.find(b);
//		if (it1 != tmp.end() || it2 != tmp.end())
//		{
//			tmp.insert(a);
//			tmp.insert(b);
//		}
//		else
//		{
//			vector<int> r;
//			for (set<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
//			{
//				r.push_back(*it);
//			}
//			res.push_back(r);
//			count++;
//			tmp.clear();
//			tmp.insert(a);
//			tmp.insert(b);
//		}
//	}
//	cout << count << endl;
//	for (int i = 0; i<res.size(); i++)
//	{
//		for (int j = 0; j<res[i].size(); j++)
//		{
//			cout << res[i][j] << " ";
//		}
//		cout << endl;
//	}
//	//最后一次结果在set中
//	for (set<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
