//
// Created by amaru on 5/2/20.
//

#include "LIFO.h"
//
// Created by amaru on 5/2/20.

template <typename T>
LIFO<T>::LIFO(int cap) {
    capacity = cap;
    top = -1;
    data = new T[cap];
}

template <typename T>
LIFO<T>::~LIFO() {
    delete[] data;
}

//private functions
template <typename T>
void LIFO<T>::add_one() {
    if (top+1 > capacity) {
        capacity *= 2;
        T *aux = new T[capacity];
        for (size_t i = 0; i < top + 1; i++) {
            aux[i] = data[i];
        }
        delete[] data;
        data = aux;
    }
}
template <typename T>
void LIFO<T>::push(T value) {
    if(is_full()){
        cout << "LIFO is full"<< endl;
        return;
    }
    add_one();
    top++;
    data[top] = value;
}

template <typename T>
void LIFO<T>::pop() {
    if(is_empty()){
        cout << "LIFO is empty" << endl;
        return;
    }
    top--;
}

template <typename T>
T LIFO<T>::peek() {
    return data[top];
}
template <typename T>
int LIFO<T>::get_size() {
    return top;
}
template <typename T>
bool LIFO<T>::is_full() {
    return (top == MAX-1);
}
template <typename T>
bool LIFO<T>::is_empty() {
    return (top == -1);
}
//public functions