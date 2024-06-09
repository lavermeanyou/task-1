#include "MyStack.h"
#include <iostream>
using namespace std;

MyStack::MyStack(int size) : BaseArray(size) { // BaseArray의 생성자를 호출하는 MyStack 생성자
    top = -1; // 스택의 최상위 인덱스를 -1로 초기화 (스택이 비어있음을 의미)
}

void MyStack::push(int n) { // 스택에 원소를 추가하는 함수
    if (top >= size - 1) { // 만약 스택이 꽉 찼다면
        resize(size * 2); // 용량을 두 배로 증가
        cout << "Stack Full!! -- 스택 용량 늘림!" << endl; // 용량 늘어남 메세지 출력
    }
    p[++top] = n; // 스택의 최상위 인덱스를 증가시키고 원소를 추가
}

int MyStack::pop() { // 스택에서 원소를 제거하고 반환하는 함수
    if (top >= 0) { // 스택이 비어있지 않다면
        return p[top--]; // 최상위 원소를 반환하고 인덱스를 감소시킴
    }
    return -1; // 스택이 비어있는 경우 -1을 반환
}

int MyStack::length() { // 스택의 현재 크기를 반환하는 함수
    return top + 1; // 최상위 인덱스 + 1이 현재 스택의 크기 (크기이기 때문에 +1)
}
