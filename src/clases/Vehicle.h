//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_VEHICLE_H
#define EJERCICIO1_VEHICLE_H

#include "../lib.h"

class Vehicle {

public:
    enum STATUS
    {
        FREE,
        BUSY,
    };

    Vehicle(STATUS status) {
        state = FREE;
    }

    Vehicle()= default;
    Vehicle(int id, STATUS pstate){
        id_vehicle = id;
        state = pstate;
    }

    Vehicle(int capacity):capacity{capacity}{}

    void set_id(int id){
        id_vehicle = id;
    }

    void set_state(STATUS value){
        state = value;
    }

    int get_id(int id){
        return id_vehicle;
    }


    STATUS get_state(){
        return state;
    }

private:
    int id_vehicle{};
    Vehicle::STATUS state;
    int capacity;
};


#endif //EJERCICIO1_VEHICLE_H
