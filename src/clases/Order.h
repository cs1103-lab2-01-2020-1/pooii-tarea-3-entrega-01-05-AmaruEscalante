//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_ORDER_H
#define EJERCICIO1_ORDER_H

#include "../tipos.h"
#include "User.h"
#include "Product.h"
#include "Vehicle.h"

class Order {
private:
    int order_id;
    User user;
    vector <Product> product;
    string order_state;
    double price;
    Vehicle vehicle;
public:
   // static int order_id;
    Order(){
    }

    Order(User user){
        order_state = "In process";
    }
    void add_product(Product p){
        product.push_back(p);
        price += p.get_price();
    }

    void purchase(){

    }

    void track_order(){
        int i = 1;

        for (auto& item:this->product) {
            cout << i << ". "<< item.get_name() << endl;
            i++;
        }

        cout << "Total price: " << price << endl;
        cout << "Vehicle: " << vehicle.get_name() << endl;
        cout << "State"<< endl;
    }
};


#endif //EJERCICIO1_ORDER_H
