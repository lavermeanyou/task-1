#ifndef MYSTACK_H // 메크로
#define MYSTACK_H
#include "BaseArray.h" // BaseArray 클래스 추가

class MyStack : public BaseArray {
    int top; // stack의 최상위 원소의 인덱스
public:
    MyStack(int size); // 생성자
    void push(int n); // 스택에 원소를 추가하는 함수
    int pop(); // 스택에서 원소를 제거하고 반환하는 함수
    int length();// 스택의 현재 크기를 반환하는 함수
};


#endif 
