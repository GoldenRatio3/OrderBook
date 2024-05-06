#include <iostream>

#include "OrderBook.h"

int main() {
	OrderBook orderbook;
	const OrderId orderId = 1;
	orderbook.AddOrder(make_shared<Order>(OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10));
	std::cout << orderbook.Size() << endl; // 1
	orderbook.CancelOrder(orderId);
	std::cout << orderbook.Size() << endl; // 0 
	return 0;
}
