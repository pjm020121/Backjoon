// 1546 / Average

#include <iostream>
using namespace std;

int main() {

	int n, max;    // ���� �� �Է¹��� ����
	long double total = 0;    // total�� �ʱ�ȭ

	cin >> n;    // ���� �� �Է¹ޱ�

	long double* q = new long double[n];    // ���� �� ��ŭ ���� �Ҵ�

	// ���� �Է¹ޱ�
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		max = q[0];
	}

	for (int i = 0; i < n; i++) {
		if (q[i] > max)
			max = q[i];
	}

	// ����
	for (int i = 0; i < n; i++) {
		q[i] = q[i] / max * 100;
		total += q[i];
	}

	total /= n;

	cout << total;

	delete[]q;
}