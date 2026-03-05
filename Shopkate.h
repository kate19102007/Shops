#pragma once
#include "Baseshop.h"

class ShopKate : public Market {
	public:
	// новий магазин, назва магазину, початкова(базова) знижка, промокод, знижка по промокоду
	ShopKate() : Market("ShopKate", 10, "SUPER20", 20) {}
};