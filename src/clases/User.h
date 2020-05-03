//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_USER_H
#define EJERCICIO1_USER_H

#include <utility>

#include "../lib.h"
#include "Location.h"

class User {
private:
    int user_id{};
    string name;
    Location location;
public:
    User()= default;
    User(int p_user_id, string p_name, Location p_location){
        user_id = p_user_id;
        name = move(p_name);
        location.set_address(p_location.get_address());
    }

    void set_user_id(int value){
        user_id = value;
    }
    void set_name(string value){
        name = std::move(value);
    }

    void set_location(Location address){
        location = std::move(address);
    }

    int get_user_id(){
        return user_id;
    };

    string get_name(){
        return name;
    }

    string get_location(){
        return location.get_address();
    }

    void print_user(){
        cout << "ID: " << user_id << endl;
        cout << "Name: " <<name<< endl;
        cout << "Location: " << location.get_address() << endl;
    }
};


#endif //EJERCICIO1_USER_H
