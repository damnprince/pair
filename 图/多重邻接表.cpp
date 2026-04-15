#include<iostream>
using namespace std;
#define inf 10001

int n, m;
//链表结点的结构体
typedef struct ENode {
	int x, y, w;
	ENode* xnext;
	ENode* ynext;
}ENode;

//多重邻接表的结构体
struct G {
	char data;
	ENode* first;
}g[105];

int Find(char r) {
	for (int i = 1; i <= n;i++) {
		if (r == g[i].data)return i;
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> g[i].data;
		g[i].first = NULL;
	}
	int pi, qi, w;
	char p, q;
	for (int i = 1; i <= m; i++) {
		cin >> p >> q >> w;
		pi = Find(p);
		qi = Find(q);
		ENode* e = (ENode*)malloc(sizeof(ENode));
		e->x = pi, e->y = qi, e->w = w;

		e->xnext = g[pi].first;
		g[pi].first = e;

		e->ynext = g[qi].first;
		g[qi].first = e;
	}
	char tar;
	cin >> tar;
	int ti, d=0;
	ti = Find(tar);
	ENode* f = g[ti].first;
	while (f != NULL) {
		d++;
		if (f->x == ti)f = f->xnext;
		else f = f->ynext;
	}
	cout << tar << " 度：" << d << endl;


	return 0;
}