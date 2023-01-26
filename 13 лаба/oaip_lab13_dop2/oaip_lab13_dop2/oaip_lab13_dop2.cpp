//сортировка методом бинарной кучи

#include <stdio.h>
#include <malloc.h>

typedef struct {
	// int value;
	int  key;
} ITEM;

class HEAP {
public:
	ITEM* h;
	int  size;

	HEAP(unsigned int n) {
		size = 0;
		h = (ITEM*)malloc(sizeof(ITEM) * n);
	}

	~HEAP() {
		if (h) free(h);
	}

	int add(ITEM x) {
		h[++size] = x;
		checkup(size);
		return 1;
	}

	int extract_min(ITEM* x) {
		if (size == 0) return 0;
		*x = h[1];
		h[1] = h[size--];
		checkdown(1);
		return 1;
	}

private:
	void checkup(int c) {
		int p;
		p = c / 2;
		if (p == 0)return;
		if (h[p].key > h[c].key) {
			ITEM tmp;
			tmp = h[p]; h[p] = h[c]; h[c] = tmp;
			checkup(p);
		}
	}

	void checkdown(int p) {
		int c;
		c = 2 * p;
		if (c > size) return;
		if (c + 1 <= size && h[c + 1].key < h[c].key) c++;

		if (h[c].key < h[p].key) {
			ITEM tmp;
			tmp = h[c]; h[c] = h[p]; h[p] = tmp;
			checkdown(c);
		}
	}
};

int main() {
	HEAP heap(1000);
	int n, i;
	ITEM x;

	printf("n= ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%2d x.key= ", i);
		scanf_s("%d", &x.key);
		heap.add(x);
	}

	while (heap.extract_min(&x)) {
		printf("%d ", x.key);
	}

	scanf_s("%d", &n);
	return 0;
}
