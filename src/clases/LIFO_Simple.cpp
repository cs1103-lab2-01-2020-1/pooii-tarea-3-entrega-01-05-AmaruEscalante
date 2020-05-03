//
// Created by amaru on 5/2/20.
//

#include "LIFO_Simple.h"


LIFO_Simple::LIFO_Simple(int cap) {
    capacity = cap;
    top = -1;
    data = new int[cap];
}

LIFO_Simple::~LIFO_Simple() {
    delete[] data;
}

//private functions
void LIFO_Simple::add_one() {
    if (top+1 > capacity) {
        capacity *= 2;
        int *aux = new int[capacity];
        for (size_t i = 0; i < top + 1; i++) {
            aux[i] = data[i];
        }
        delete[] data;
        data = aux;
    }
}

void LIFO_Simple::push(int value) {
    if(is_full()){
        cout << "LIFO is full"<< endl;
        return;
    }
    add_one();
    top++;
    data[top] = value;
}

void LIFO_Simple::pop() {
    if(is_empty()){
        cout << "LIFO is empty" << endl;
        return;
    }
    top--;
}

int LIFO_Simple::peek() {
    return data[top];
}

int LIFO_Simple::get_size() {
    return top;
}

bool LIFO_Simple::is_full() {
    return (top == MAX-1);
}

bool LIFO_Simple::is_empty() {
    return (top == -1);
}
//public functions



