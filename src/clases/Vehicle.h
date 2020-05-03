//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_VEHICLE_H
#define EJERCICIO1_VEHICLE_H

#include "../lib.h"

class Vehicle {
private:
    int id_vehicle;
    string name;
    string state;
public:
    Vehicle()= default;
    Vehicle(int id, string pname, string pstate){
        id_vehicle = id;
        name = move(pname);
        state = move(pstate);
    }

    void set_id(int id){
        id_vehicle = id;
    }

    void set_name(string name){
        this->name = move(name);
    }

    void set_state(string value){
        state = value;
    }

    string get_name(){
        return name;
    }
};


#endif //EJERCICIO1_VEHICLE_H
