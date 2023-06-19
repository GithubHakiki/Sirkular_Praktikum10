#include "queue.h"

Queue::Queue() {
    _front = 0;
    _back = 0;
    for (int i = 0; i < 10; i++)
        _elements[i] = 10;
}

void Queue::push(int e) {
    if (!full()) {
        _elements[_back] = e;
        _back = (_back + 1) % 10;  // Menggunakan operator modulus untuk mengatur indeks _back
    }
}

void Queue::pop() {
    if (!empty()) {
        _front = (_front + 1) % 10; // Menggunakan operator modulus untuk mengatur indeks _front
    }
}

int Queue::size() {
    return (_back - _front + 10) % 10;  // Menggunakan operator modulus untuk mengatasi kasus sirkular
}

bool Queue::full() {
    return (_back + 1) % 10 == _front;  // Menggunakan operator modulus untuk mengatur kasus sirkular
}

bool Queue::empty() {
    return _front == _back;
}

int Queue::front() {
    return _elements[_front];
}

int Queue::back() {
    return _elements[(_back - 1 + 10) % 10];  // Menggunakan operator modulus untuk mengatasi kasus sirkular
}

