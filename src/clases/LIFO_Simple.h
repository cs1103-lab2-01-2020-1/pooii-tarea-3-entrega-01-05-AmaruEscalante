//
// Created by amaru on 5/2/20.
//

#ifndef TAREA3_LIFO_SIMPLE_H
#define TAREA3_LIFO_SIMPLE_H

#include "../lib.h"

#define MAX 1000

class LIFO_Simple {
private:
    int* data;
    int capacity;
    int top;
    void add_one();
public:
    LIFO_Simple(int cap);
    ~LIFO_Simple();

    void push(int value);
    void pop();
    int peek();
    int get_size();
    bool is_full();
    bool is_empty();
};


#endif //TAREA3_LIFO_SIMPLE_H
