#pragma once
#include "Baseshop.h"

class ShopYaryna : public Market {
public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
	ShopYaryna() : Market("ShopYaryna", 5, "WOW15", 15) {


		// Додавання товарів назва кількість ціна
		addProduct("T-shirt", 1, 1000.0);
		addProduct("Jeans", 2, 1499.0);
		addProduct("Cap", 1, 289.0);
		usePromo("WOW15");
	}
};