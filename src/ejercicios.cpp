//
// Created by amaru on 5/2/20.
//
#include "ejercicios.h"

void ejercicio1(){
    //Set locations
    Product ball;
    ball.set_product_id(001);
    ball.set_name("Basketball");
    ball.set_price(200);

    Product computer;
    computer.set_product_id(002);
    computer.set_name("Macbook");
    computer.set_price(3000);


    Location Lima, Tienda;
    Lima.set_address("La Molina 123");
    Tienda.set_address("Surco 123");

    Truck truck1;
    truck1.set_id(1);
    Bike bike1;
    bike1.set_id(2);

    cout<< "Delivery system" << endl;
    User user1;
    user1.set_user_id(001);
    string name;
    cout << "Insert your Name" << endl;
    cin >> name;
    user1.set_name(name);
    user1.set_location(Lima);

    cout << "User1 Registered" << endl;
    user1.print_user();

    cout << "Order" << endl;
    Order order1;
    order1.add_product(ball);
    order1.add_product(computer);
    cout << "Track" << endl;
    order1.track_order();
}
void ejercicio2(){
    LIFO_Simple s(10);
    s.push(10);
    s.push(5);
    s.push(5);
    s.push(5);
    s.push(20);
    s.push(20);
    s.push(20);
    while (!s.is_empty()) {
        int t = s.peek();
        cout << t << " ";
        s.pop();
    }
    cout << endl;
    s.pop();
    cout<<endl;
}


void ejercicio3(){

    int array1[] = {1,2,3,4,5,6,7};
    int n1 = sizeof(array1)/sizeof(array1[0]);
    int array2[] = {1,2,8,3,5};
    int n2 = sizeof(array2)/sizeof(array2[0]);

    list<int> lst1(array1,array1+n1);
    list<int> lst2(array2,array2+n2);

    cout << "Merge " << endl;
    lst1.merge(lst2);
    print_list(lst1);

    cout << "Sort " << endl;
    lst1.sort();
    print_list(lst1);

    cout << "Binary search of 7 " << endl;
    int x = 7;
    if (binary_search(lst1.begin(), lst1.end(), x))
        cout<<x<<" found"<<endl;
    else
        cout<<"not found"<<endl;

    // std :: lower_bound

    auto low1 = lower_bound(lst1.begin(), lst1.end(), 8);
    // Printing the lower bounds
    std::cout
            << "lower_bound for element 8 at position : "
            << (*low1  - *lst1.begin())<<endl;
}
void ejercicio4(){
    LIFO<float> s(10.12);
    s.push(3.10);
    s.push(3.5);
    s.push(3.5);
    s.push(3.5);
    s.push(3.20);
    s.push(3.20);
    s.push(3.20);
    while (!s.is_empty()) {
        auto t = s.peek();
        cout << t << " ";
        s.pop();
    }
    cout << endl;
    s.pop();
    cout<<endl;
}
