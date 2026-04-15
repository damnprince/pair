#include<iostream>
using namespace std;
#define inf 10001

int n, m;
//链表结点的结构体
typedef struct ENode {
	int tail, head, w;
	ENode* tnext;
	ENode* hnext;
}ENode;

//十字链表的结构体
struct G{
	char data;
	ENode* fin;
	ENode* fout;
}g[105];

int Find(char x) {
	for (int i = 1; i <= n; i++)
		if (g[i].data == x)return i;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> g[i].data;
		g[i].fin = NULL;
		g[i].fout = NULL;
	}
	char x, y;
	int xi, yi, w;
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> w;
		xi = Find(x);
		yi = Find(y);
		ENode* e = (ENode*)malloc(sizeof(ENode));
		e->tail = xi;
		e->head = yi;
		e->w = w;
		//出边
		e->tnext = g[xi].fout;
		g[xi].fout = e;
		//入边
		e->hnext = g[yi].fin;
		g[yi].fin = e;
	}
	char tar;
	cin >> tar;
	int ti, id = 0, od = 0;
	ti = Find(tar);
	//求出度
	ENode* p = g[ti].fout;
	while (p != NULL) {
		od++;
		p = p->tnext;
	}
	//求入度
	ENode* q = g[ti].fin;
	while (q != NULL) {
		id++;
		q = q->hnext;
	}
	cout << tar << " 出度为：" << od << " 入度为：" << id << endl;

	return 0;
}