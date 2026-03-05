#include"Baseshop.h"
#include"Shopkate.h"
#include"ShopVika.h"


int main() {
    ShopKate shop_kate;
    ShopVika shop_vika;
	ShopDana shop_dana;

    ofstream file("receipt.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "========== ЧЕК ==========" << endl << endl;

    shop_kate.saveReceipt(file);
	shop_vika.saveReceipt(file);
	shop_dana.saveReceipt(file);

	double total = shop_kate.calculateTotal() + shop_vika.calculateTotal()+shop_dana.calculateTotal();
   


    file << "==========================" << endl;
    file << "    ЗАГАЛЬНА СУММА: " << total << endl;
    file << "==========================" << endl;
    file.close();

    cout << "Saved to receipt.txt" << endl;

    return 0;

}

