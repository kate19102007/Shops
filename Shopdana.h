#pragma once
#include "Baseshop.h"

class ShopDana : public Market {
	public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
	ShopDana() : Market("ShopDana", 10, "SUPER30", 30) {


		// Додавання товарів назва кількість ціна
		addProduct("Notebook", 3, 100.0);
		addProduct("Pen", 2, 25.0);
		addProduct("Pensil", 1, 8.0);
		usePromo("SUPER30");
	}
};
