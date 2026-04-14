//#include<iostream>
//using namespace std;
//#define inf 10001
////n代表点数  n<100，m代表边数  m<(n*(n-1))(有向），v[]存放点的数据，e[]存放边的权值或者判断是否存在
////权值w  -10000<=w<=10000	在这范围之外代表权值不存在
//int n, m;
//char v[105];
//int e[105][105];
//
//int Find(char x) {
//	for (int i = 1; i <= n; i++)
//		if (x == v[i])return i;
//}
////有权无向图
//int main() {
//	cin >> n >> m;
//	//初始化点的数据
//	for (int i = 1; i <= n; i++) {
//		cin >> v[i];
//	}
//	//初始化边
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= m; j++) {
//			e[i][j] = inf;
//		}
//	}
//	char x, y;
//	int xi, yi, w;
//	for (int i = 1; i <= m; i++) {
//		cin >> x >> y >> w;
//		xi = Find(x);
//		yi = Find(y);
//		e[xi][yi] = e[yi][xi] = w;
//	}
//	char tar;
//	cin >> tar;
//	int ti = Find(tar);
//	int d = 0;
//	for (int j = 1; j <= m; j++) {
//		if (e[ti][j] != inf)d++;
//	}
//	cout <<"数据："<< tar << " 下标：" << ti << " 度：" << d << endl;
//	return 0;
//}