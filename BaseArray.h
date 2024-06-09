#ifndef BASEARRAY_H //��ũ��
#define BASEARRAY_H

class BaseArray {
protected:
    int* p; // �迭�� ����Ű�� ������
    int size; // �迭�� ũ��
public:
    BaseArray(int size) : size(size) { // ������, �迭�� ũ�⸦ �ʱ�ȭ
        p = new int[size]; // �迭 ���� �Ҵ�
    }

    ~BaseArray() { // �Ҹ���, ���� �Ҵ�� �迭�� ����
        delete[] p;
    }

    int capacity() { // �迭�� ũ�⸦ ��ȯ�ϴ� �Լ�
        return size;
    }

    void resize(int newSize) { // �迭�� ũ�⸦ �����ϴ� �Լ�
        int* newP = new int[newSize]; // ���ο� ũ���� �迭 ���� �Ҵ�
        for (int i = 0; i < size; i++) { // ���� �迭�� ���Ҹ� ���ο� �迭�� ����
            newP[i] = p[i];
        }
        delete[] p; // ���� �迭 ����
        p = newP; // ���ο� �迭�� ����Ű���� ������ ����
        size = newSize; // ���ο� ũ��� ������Ʈ
    }
};

#endif