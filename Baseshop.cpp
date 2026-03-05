#include"Baseshop.h"	
Product::Product(string name, int count, double price) {
    this->name = name;
    this->count = count;
    this->price = price;
}

Product::Product()
{
    this->name = "";
    this->count = 0;
	this->price = 0.0;
}

Market::Market(string name, int discount, string promo_code, int promo_value) {
    this->name = name;
    this->discount = discount;
    this->promo_code = promo_code;
    this->promo_value = promo_value;
}
void Market::addProduct(string productName, int count, double price) {
    double finalPrice = price * (1.0 - discount / 100.0);
    products[indx++] = Product(productName, count, finalPrice);
}

void Market::usePromo(string promoCode) {
    if (promo_code == promoCode && !promo_used) {
        discount += promo_value;
        promo_used = true;
    }
}

void Market::saveReceipt(ofstream& file) {
    file << "Магазин: " << name << endl;
    file << "Знижка: " << discount << "%" << endl;
    if (promo_used) {
        file << "Промокод: застосовано (+" << promo_value << "%)" << endl;
    }
    file << "----------------------------" << endl;

    double total = 0;
    for (int i = 0; i < indx; i++) {
        double lineTotal = products[i].price * products[i].count;
        file << products[i].name
            << " x" << products[i].count
            << " | " << products[i].price
            << " * " << products[i].count
            << " = " << lineTotal << endl;
        total += lineTotal;
    }

    file << "Разом: " << total << endl;
    file << endl;
}
doubl Market::calculateTotal() {
    double total = 0;
    for (int i = 0; i < indx; i++) {
        total += products[i].price * products[i].count;
    }
    return total;
}

string Market::getName() { 
    return name; 
}
