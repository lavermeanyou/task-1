#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int size) : BaseArray(size) { // BaseArray�� �����ڸ� ȣ���ϴ� MyQueue ������
    front = 0; // ť�� ù ��° ������ �ε����� 0���� �ʱ�ȭ
    rear = 0; // ť�� ������ ������ ���� �ε����� 0���� �ʱ�ȭ
    count = 0; // ť�� ���� ũ�⸦ 0���� �ʱ�ȭ
}

void MyQueue::enqueue(int n) { // ť�� ���Ҹ� �߰��ϴ� �Լ�
    if (count >= size) { // ť�� �� á�ٸ�
        resize(size * 2); // �뷮�� �� ��� �ø�
        cout << "Queue full -- ť �뷮 �ø�!" << endl; // �뷮�� �þ�� �޼��� ���
    }
    p[rear] = n; // rear ��ġ�� ���Ҹ� �߰�
    rear = (rear + 1) % size; // rear �ε����� ��ȯ��Ű�� ����
    count++; // ť�� ũ�� ����
}

int MyQueue::dequeue() { // ť���� ���Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
    if (count > 0) { // ť�� ������� �ʴٸ�
        int value = p[front]; // front ��ġ�� ���Ҹ� ����
        front = (front + 1) % size; // front �ε����� ��ȯ��Ű�� ����
        count--; // ť�� ũ�� ����
        return value; // ���ŵ� ���� ��ȯ
    }
    return -1; // ť�� ����ִ� ��� -1 ��ȯ
}

int MyQueue::length() { // ť�� ���� ũ�⸦ ��ȯ�ϴ� �Լ�
    return count; // ť�� ũ�⸦ ��ȯ
}

void MyQueue::resize(int newSize) { // ť�� ũ�⸦ �����ϴ� �Լ�
    int* newP = new int[newSize];  // ���ο� ũ���� �迭 ���� �Ҵ�
    for (int i = 0; i < count; i++) { // ���� �迭�� ���Ҹ� ���ο� �迭�� ����
        newP[i] = p[(front + i) % size]; // ��ȯ ť�� �ε����� �°� ����
    }
    delete[] p; // ���� �迭 ����
    p = newP; // ���ο� �迭�� ����Ű���� ������ ����
    front = 0; // front �ε��� �ʱ�ȭ
    rear = count; // rear �ε����� ���� ũ��� ����
    size = newSize; // ���ο� ũ��� ������Ʈ
}
