//#include<iostream>
//using namespace std;
//#define inf 10001
////有权无向图
//int n, m;
//
////边链表节点的结构体
//typedef struct ENode {
//	int data;
//	int w;
//	ENode* next;
//}ENode;
//
////邻接表的结构体
//struct G{
//	char data;
//	ENode* first;
//}g[105];
//
//int Find(char x) {
//	for (int i = 1; i <= n; i++) {
//		if (x == g[i].data)return i;
//	}
//}
//
//void Contact(int a, int b, int w) {
//	ENode* e = (ENode*)malloc(sizeof(ENode));
//	e->data = b;
//	e->w = w;
//	e->next = g[a].first;
//	g[a].first = e;
//}
//
//int main() {
//	cin >> n >> m;
//	//初始化邻接表
//	for (int i = 1; i <= n; i++) {
//		cin >> g[i].data;
//		g[i].first = NULL;
//	}
//	char x, y;
//	int xi, yi, w;
//	for (int i = 1; i <= m; i++) {
//		cin >> x >> y >> w;
//		xi = Find(x);
//		yi = Find(y);
//		Contact(xi, yi, w);//x为出边，y为入边
//		Contact(yi, xi, w);//y为出边，x为入边
//	}
//	char tar;
//	cin >> tar;
//	int ti, d = 0;
//	ti = Find(tar);
//	ENode* p = g[ti].first;
//	while (p != NULL) {
//		d++;
//		p = p->next;
//	}
//	cout << "数据：" << tar << " 下标：" << ti << " 度：" << d << endl;
//	return 0;
//}
///*
//4 5
//A B C D
//A B 3
//A C 4
//A D 1
//B C 2
//C D 2
//*/