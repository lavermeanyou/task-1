#ifndef BASEARRAY_H //메크로
#define BASEARRAY_H

class BaseArray {
protected:
    int* p; // 배열을 가리키는 포인터
    int size; // 배열의 크기
public:
    BaseArray(int size) : size(size) { // 생성자, 배열의 크기를 초기화
        p = new int[size]; // 배열 동적 할당
    }

    ~BaseArray() { // 소멸자, 동적 할당된 배열을 해제
        delete[] p;
    }

    int capacity() { // 배열의 크기를 반환하는 함수
        return size;
    }

    void resize(int newSize) { // 배열의 크기를 조절하는 함수
        int* newP = new int[newSize]; // 새로운 크기의 배열 동적 할당
        for (int i = 0; i < size; i++) { // 기존 배열의 원소를 새로운 배열로 복사
            newP[i] = p[i];
        }
        delete[] p; // 기존 배열 해제
        p = newP; // 새로운 배열을 가리키도록 포인터 변경
        size = newSize; // 새로운 크기로 업데이트
    }
};

#endif