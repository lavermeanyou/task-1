#include <iostream>
#include "MyQueue.h"
#include "MyStack.h"
#include "BaseArray.h"

using namespace std;

int main() {
    MyQueue mQ(3); // 크기가 3인 MyQueue클래스 객체 생성
    MyStack mS(3); // 크기가 3인 MyStack클래스 객체 생성
    int n;// cin으로 입력받을 정수
    cout << "5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입 
        mS.push(n); // 스택에 삽입
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length() << endl;
    cout << "큐의 원소를 2개 제거하여 출력한다>> ";
    cout << mQ.dequeue() << ' '; // 예제와 같이 
    cout << mQ.dequeue() << ' '; // 큐에서 2개의 원소를 제거하여 출력 
    cout << endl;
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n); // 새로운 n값을 큐에 삽입 
        mS.push(n); // 새로운 n값을 스택에 삽입
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' '; // // 큐에서 제거하여 원소를 순서대로 출력  
    }
    cout << endl;
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length() << endl;
    cout << "스택의 원소를 순서대로 제거하여 출력한다>> ";
    while (mS.length() != 0) {
        cout << mS.pop() << ' '; // 스택에서 제거하여 원소를 순서대로 출력
    }
    cout << endl;
    cout << "스택의 용량:" << mS.capacity() << ", 스택의 크기:" << mS.length() << endl;
}
