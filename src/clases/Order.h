//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_ORDER_H
#define EJERCICIO1_ORDER_H

#include "../lib.h"
#include "User.h"
#include "Product.h"
#include "Vehicle.h"



class Order {
public:
    enum ORD_STATUS {
        DELIVERED,
        PROCESSING,
    };
   // static int order_id;
    Order(){}

    Order(ORD_STATUS status) {
        order_state = PROCESSING;
    }

    void set_vehicle(Vehicle vehicleoforder){
        vehicle = vehicleoforder;
    }

    void set_status (ORD_STATUS stateoforder){
        order_state = stateoforder;
    }


    void add_product(Product p){
        product.push_back(p);
        price += p.get_price();
    }

    void track_order(){
        int i = 1;

        for (auto& item:this->product) {
            cout << i << ". "<< item.get_name() << endl;
            i++;
        }

        cout << "Total price: " << price << endl;

        cout << "State"<< endl;
    }

private:
    int order_id;
    User user;
    vector <Product> product;
    ORD_STATUS order_state;
    double price;
    Vehicle vehicle;
};


#endif //EJERCICIO1_ORDER_H
