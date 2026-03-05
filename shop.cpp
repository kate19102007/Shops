#include"Baseshop.h"
#include"Shopkate.h"


int main() {
    ShopKate shop_kate;


    // Додавання товарів назва кількість ціна
    shop_kate.addProduct("Ноутбук", 1, 1000.0);
    shop_kate.addProduct("Мишка", 2, 50.0);
    shop_kate.usePromo("SUPER20");
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