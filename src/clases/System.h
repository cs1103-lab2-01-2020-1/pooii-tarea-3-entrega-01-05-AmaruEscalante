//
// Created by amaru on 5/2/20.
//

#ifndef TAREA3_SYSTEM_H
#define TAREA3_SYSTEM_H

#include "User.h"
#include "Vehicle.h"
#include "Product.h"
#include "Order.h"

class System{
private:
    vector<User> users;
    vector<Vehicle> vehicles;
    vector<Order> orders;
public:
    System();

};

#endif //TAREA3_SYSTEM_H
