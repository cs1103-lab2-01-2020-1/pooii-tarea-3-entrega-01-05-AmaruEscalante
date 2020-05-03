//
// Created by amaru on 5/2/20.
//

#ifndef TAREA3_LIFO_H
#define TAREA3_LIFO_H

#define MAX 1000

#include "../tipos.h"

template <typename T>
class LIFO {
private:
    T* data;
    int capacity;
    int top;
    void add_one();
public:
    LIFO(int cap);
    ~LIFO();

    void push(T value);
    void pop();
    T peek();
    int get_size();
    bool is_full();
    bool is_empty();
};


#endif //TAREA3_LIFO_H
