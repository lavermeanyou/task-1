#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size) : BaseArray(size) { // BaseArray�� �����ڸ� ȣ���ϴ� MyStack ������
    top = -1; // ������ �ֻ��� �ε����� -1�� �ʱ�ȭ (������ ��������� �ǹ�)
}

void MyStack::push(int n) { // ���ÿ� ���Ҹ� �߰��ϴ� �Լ�
    if (top >= size - 1) { // ���� ������ �� á�ٸ�
        resize(size * 2); // �뷮�� �� ��� ����
        cout << "Stack Full!! -- ���� �뷮 �ø�!" << endl; // �뷮 �þ �޼��� ���
    }
    p[++top] = n; // ������ �ֻ��� �ε����� ������Ű�� ���Ҹ� �߰�
}

int MyStack::pop() { // ���ÿ��� ���Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
    if (top >= 0) { // ������ ������� �ʴٸ�
        return p[top--]; // �ֻ��� ���Ҹ� ��ȯ�ϰ� �ε����� ���ҽ�Ŵ
    }
    return -1; // ������ ����ִ� ��� -1�� ��ȯ
}

int MyStack::length() { // ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ�
    return top + 1; // �ֻ��� �ε��� + 1�� ���� ������ ũ�� (ũ���̱� ������ +1)
}
