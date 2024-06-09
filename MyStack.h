#ifndef MYSTACK_H // ��ũ��
#define MYSTACK_H
#include "BaseArray.h" // BaseArray Ŭ���� �߰�

class MyStack : public BaseArray {
    int top; // stack�� �ֻ��� ������ �ε���
public:
    MyStack(int size); // ������
    void push(int n); // ���ÿ� ���Ҹ� �߰��ϴ� �Լ�
    int pop(); // ���ÿ��� ���Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
    int length();// ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ�
};


#endif 
