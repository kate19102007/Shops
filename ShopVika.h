#pragma once
#include "Baseshop.h"

class ShopVika : public Market {
	public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
		ShopVika() : Market("ShopVika", 5, "DISCOUNTVIKA15", 15) {

			// Додавання товарів назва кількість ціна
			addProduct("Phone", 1, 1500.0);
			addProduct("Headphones", 2, 700.0);
			addProduct("Charger", 1, 75.0);
			usePromo("DISCOUNTVIKA15");
		}
};