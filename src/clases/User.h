//
// Created by amaru on 5/2/20.
//

#ifndef EJERCICIO1_USER_H
#define EJERCICIO1_USER_H

#include <utility>

#include "../tipos.h"

class User {
private:
    int user_id{};
    string name;
    string location;
public:
    User()= default;
    User(int p_user_id, string p_name, string p_location){
        user_id = p_user_id;
        name = move(p_name);
        location = move(p_location);
    }

    void set_user_id(int value){
        user_id = value;
    }
    void set_name(string value){
        name = std::move(value);
    }

    void set_location(string value){
        location = std::move(value);
    }

    int get_user_id(){
        return user_id;
    };

    string get_name(){
        return name;
    }

    string get_location(){
        return location;
    }

    void print_user(){
        cout << "ID: " << user_id << endl;
        cout << "Name: " <<name<< endl;
        cout << "Location: " <<location<< endl;
    }
};


#endif //EJERCICIO1_USER_H
