#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Store{
    protected:
        Vehicle ** _store_vehicles;
        int _capacity;
    public:
        Store();
        Store(int capacity);
        int get_capacity();
        void add_vehicle(Vehicle *new_car, int *num_added);
        void get_vehicle_by_brand(string target_brand, int *number_added);
        void get_vehicle_by_price(int target_price, int *number_added);
        void get_vehicle_by_brand_and_price(string target_brand, int target_price, int *number_added);
        ~Store();
};
