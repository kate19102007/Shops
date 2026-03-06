#pragma once
#include "Baseshop.h"

class ShopOlya : public Market {
	public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
		ShopOlya() : Market("ShopOlya", 2, "BLACK20", 20) {

			// Додавання товарів назва кількість ціна
			addProduct("Manga", 1, 350.0);
			addProduct("Boardgame", 2, 2100.0);
			addProduct("Puzzle", 1, 599.0);
            addProduct("Funko Pop", 1, 950.0);
			addProduct("Action figure", 2, 3600.0);

			usePromo("BLACK20");
		}
};
