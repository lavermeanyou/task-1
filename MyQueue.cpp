#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int size) : BaseArray(size) { // BaseArray의 생성자를 호출하는 MyQueue 생성자
    front = 0; // 큐의 첫 번째 원소의 인덱스를 0으로 초기화
    rear = 0; // 큐의 마지막 원소의 다음 인덱스를 0으로 초기화
    count = 0; // 큐의 현재 크기를 0으로 초기화
}

void MyQueue::enqueue(int n) { // 큐에 원소를 추가하는 함수
    if (count >= size) { // 큐가 꽉 찼다면
        resize(size * 2); // 용량을 두 배로 늘림
        cout << "Queue full -- 큐 용량 늘림!" << endl; // 용량이 늘어남을 메세지 출력
    }
    p[rear] = n; // rear 위치에 원소를 추가
    rear = (rear + 1) % size; // rear 인덱스를 순환시키며 증가
    count++; // 큐의 크기 증가
}

int MyQueue::dequeue() { // 큐에서 원소를 제거하고 반환하는 함수
    if (count > 0) { // 큐가 비어있지 않다면
        int value = p[front]; // front 위치의 원소를 저장
        front = (front + 1) % size; // front 인덱스를 순환시키며 증가
        count--; // 큐의 크기 감소
        return value; // 제거된 원소 반환
    }
    return -1; // 큐가 비어있는 경우 -1 반환
}

int MyQueue::length() { // 큐의 현재 크기를 반환하는 함수
    return count; // 큐의 크기를 반환
}

void MyQueue::resize(int newSize) { // 큐의 크기를 조절하는 함수
    int* newP = new int[newSize];  // 새로운 크기의 배열 동적 할당
    for (int i = 0; i < count; i++) { // 기존 배열의 원소를 새로운 배열로 복사
        newP[i] = p[(front + i) % size]; // 순환 큐의 인덱스에 맞게 복사
    }
    delete[] p; // 기존 배열 해제
    p = newP; // 새로운 배열을 가리키도록 포인터 변경
    front = 0; // front 인덱스 초기화
    rear = count; // rear 인덱스를 현재 크기로 설정
    size = newSize; // 새로운 크기로 업데이트
}
