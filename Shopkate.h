#pragma once
#include "Baseshop.h"

class ShopKate : public Market {
	public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
	ShopKate() : Market("ShopKate", 10, "SUPER20", 20) {


		// Додавання товарів назва кількість ціна
		addProduct("Ноутбук", 1, 1000.0);
		addProduct("Мишка", 2, 50.0);
		addProduct("Клавіатура", 1, 80.0);
		usePromo("SUPER20");
	}
};