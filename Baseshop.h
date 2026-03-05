#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Product {
public:
    string name;
    int count;
    double price;

    Product(string name, int count, double price);
    Product();
};

class Market {
protected:
    Product products[100];
    int indx = 0;
    string name;
    string promo_code;
    int promo_value;
    int discount;
    bool promo_used = false;
    Market(string name, int discount, string promo_code, int promo_value);

public:
    void addProduct(string productName, int count, double price);

    void usePromo(string promoCode);

    void saveReceipt(ofstream& file);
    string getName();
};

