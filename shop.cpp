#include"Baseshop.h"
#include"Shopkate.h"
#include"ShopVika.h"


int main() {
    ShopKate shop_kate;
    ShopVika shop_vika;

    ofstream file("receipt.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "========== ЧЕК ==========" << endl << endl;

    shop_kate.saveReceipt(file);


    file << "==========================" << endl;
    file.close();

    cout << "Saved to receipt.txt" << endl;

    return 0;

}
