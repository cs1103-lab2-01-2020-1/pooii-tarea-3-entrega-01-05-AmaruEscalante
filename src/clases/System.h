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
    System(){}

    void process_order(Order order){
        order.set_status(Order::PROCESSING);
    }

    void set_vehicleoforder(Order order, Vehicle transport){
        order.set_vehicle(transport);
    }

    void track_order(Order order){
        cout << "Order ID: " << order.get_order_id() << endl;
        cout << "Destination: " << order.get_order_destination().get_address() << endl;
        cout << "Price: " << order.get_price() << endl;
        cout << "Vehicle location: " << order.get_vehicle().get_position().get_address() << endl;
    }

    void add_users(User user){
        users.push_back(user);
    }

    void add_vehicles(Vehicle vehicle){
        vehicles.push_back(vehicle);
    }

    void add_order(Order order){
        orders.push_back(order);
    }

    //void set_vehicle(Vehicle)



};

#endif //TAREA3_SYSTEM_H
