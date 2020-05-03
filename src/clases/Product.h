//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_PRODUCT_H
#define EJERCICIO1_PRODUCT_H

#include "../tipos.h"

class Product {
private:
    int product_id;
    string name;
    double price;
public:
    Product()= default;
    Product(int p_product_id, string p_name, double p_price){
        product_id = p_product_id;
        name = move(p_name);
        price = p_price;}

    void set_product_id(int value){
        product_id = value;
    }
    void set_name(string value){
        name = std::move(value);
    }

    void set_price(double value){
        price = value;
    }

    int get_product_id(){
        return product_id;
    };

    string get_name(){
        return name;
    }

    double get_price(){
        return price;
    }

    void print_user(){
        cout << "Product ID: " << product_id << endl;
        cout << "Name: " <<name<< endl;
        cout << "Price: " <<price<< endl;
    }
};


#endif //EJERCICIO1_PRODUCT_H
