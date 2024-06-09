#ifndef MYQUEUE_H // 메크로
#define MYQUEUE_H
#include "BaseArray.h" // BaseArray 클래스 추가

class MyQueue : public BaseArray { // BaseArray를 상속받는 MyQueue 클래스
    int front; // 큐의 첫 번째 원소의 인덱스
    int rear; // 큐의 마지막 원소의 다음 인덱스
    int count; // 큐의 현재 크기
public:
    MyQueue(int size);// 생성자
    void enqueue(int n); // 큐에 원소를 추가하는 함수
    int dequeue(); // 큐에서 원소를 제거하고 반환하는 함수
    int length(); // 큐의 현재 크기를 반환하는 함수
    void resize(int newSize); // 큐의 크기를 조절하는 함수 (BaseArray의 resize를 재정의)
};

#endif
