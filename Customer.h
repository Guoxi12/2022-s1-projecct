
#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Customer{
    protected:
        int _customer_ID;
        string _name;
        string _preference_brand;
        int _max_budget;
    public:
        Customer(int customer_ID);
        string get_preference_brand();
        string get_name();
        int get_max_budget();

};
