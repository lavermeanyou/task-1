#ifndef MYQUEUE_H // ��ũ��
#define MYQUEUE_H
#include "BaseArray.h" // BaseArray Ŭ���� �߰�

class MyQueue : public BaseArray { // BaseArray�� ��ӹ޴� MyQueue Ŭ����
    int front; // ť�� ù ��° ������ �ε���
    int rear; // ť�� ������ ������ ���� �ε���
    int count; // ť�� ���� ũ��
public:
    MyQueue(int size);// ������
    void enqueue(int n); // ť�� ���Ҹ� �߰��ϴ� �Լ�
    int dequeue(); // ť���� ���Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
    int length(); // ť�� ���� ũ�⸦ ��ȯ�ϴ� �Լ�
    void resize(int newSize); // ť�� ũ�⸦ �����ϴ� �Լ� (BaseArray�� resize�� ������)
};

#endif
