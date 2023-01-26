﻿
//Создать бинарную кучу из 16 элементов.Определить максимальный элемент.

#include <stdio.h>
#include <malloc.h>
#include <iostream>
using namespace std;

class Heap {
    static const int SIZE = 100; // максимальный размер кучи
    int* h;         // указатель на массив кучи
    int HeapSize; // размер кучи
public:
    Heap();  // конструктор кучи
    void addelem(int);  // добавление элемента кучи
    void outHeap();  // вывод элементов кучи в форме кучи
    void out();  // вывод элементов кучи в форме массива
    int getmax();  // удаление вершины (максимального элемента)
    void heapify(int);  // упорядочение кучи
};

Heap::Heap() {
    h = new int[SIZE];
    HeapSize = 0;
}

void Heap::addelem(int n) {
    int i, parent;
    i = HeapSize;
    h[i] = n;
    parent = (i - 1) / 2;
    while (parent >= 0 && i > 0) {
        if (h[i] > h[parent]) {
            int temp = h[i];
            h[i] = h[parent];
            h[parent] = temp;
        }
        i = parent;
        parent = (i - 1) / 2;
    }
    HeapSize++;
}

void Heap::outHeap(void) {
    int i = 0;
    int k = 1;
    while (i < HeapSize) {
        while ((i < k) && (i < HeapSize)) {
            cout << h[i] << " ";
            i++;
        }
        cout << endl;
        k = k * 2 + 1;
    }
}

void Heap::out(void) {
    for (int i = 0; i < HeapSize; i++) {
        cout << h[i] << " ";
    }
    cout << endl;
}

void Heap::heapify(int i) {
    int left, right;
    int temp;
    left = 2 * i + 1;
    right = 2 * i + 2;
    if (left < HeapSize) {
        if (h[i] < h[left]) {
            temp = h[i];
            h[i] = h[left];
            h[left] = temp;
            heapify(left);
        }
    }
    if (right < HeapSize) {
        if (h[i] < h[right]) {
            temp = h[i];
            h[i] = h[right];
            h[right] = temp;
            heapify(right);
        }
    }
}

int Heap::getmax(void) {
    int x;
    x = h[0];
    h[0] = h[HeapSize - 1];
    HeapSize--;
    heapify(0);
    return(x);
}

int main() {
    Heap heap;
    int k;
    setlocale(LC_ALL, "Rus");
    //system("chcp 1251");
    system("cls");
    for (int i = 0; i < 16; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> k;
        heap.addelem(k);
    }
    heap.outHeap();
    cout << endl;
    heap.out();
    cout << endl << "Максимальный элемент: " << heap.getmax();
    cout << endl << "Новая куча:" << endl;
    heap.outHeap();
    cout << endl;
    heap.out();
    cout << endl << "Максимальный элемент: " << heap.getmax();
    cout << endl << "Новая куча:" << endl;
    heap.outHeap();
    cout << endl;
    heap.out();
    cin.get(); cin.get();
    return 0;
}
