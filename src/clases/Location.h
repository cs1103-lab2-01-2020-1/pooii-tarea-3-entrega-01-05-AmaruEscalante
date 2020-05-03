//
// Created by amaru on 5/2/20.
//

#ifndef TAREA3_LOCATION_H
#define TAREA3_LOCATION_H

#include "../lib.h"

class Location {
private:
    string address;
public:
    void set_address(string add){
        address = move(add);
    }

    string get_address(){
        return address;
    }
};


#endif //TAREA3_LOCATION_H
