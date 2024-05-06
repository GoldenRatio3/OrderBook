#include <iostream>
#include <unordered_map>
#include <vector>
#include <format>
#include <list>
#include <map>
#include <numeric>
#include <memory>
#include <iterator>
#include <algorithm>
#include <set>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <string>
#include <optional>
#include <tuple>

#include "Order.h"
#include "LevelInfo.h"
#include "OrderBookLevelsInfo.h"
#include "OrderModify.h"
#include "TradeInfo.h"
#include "Trade.h"
#include "OrderBook.h"

using namespace std;

int main() {
	OrderBook orderbook;
	const OrderId orderId = 1;
	orderbook.AddOrder(make_shared<Order>(OrderType::GoodTillCancel, orderId, Side::Buy, 100, 10));
	cout << orderbook.Size() << endl; // 1
	orderbook.CancelOrder(orderId);
	cout << orderbook.Size() << endl; // 0 
	return 0;
}
