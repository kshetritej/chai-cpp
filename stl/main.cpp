#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <list>
#include <ctime>
#include <deque>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
    int product_id;
    string name;
    string category;
};

struct Order
{
    string order_id;
    int product_id;
    int quantity;
    string customer_id;
    time_t order_date;
};

int main()
{
    vector<Product> products = {
        {1, "Apple", "Groceries"},
        {2, "Banana", "Groceries"},
        {3, "Orange", "Groceries"},
        {4, "Smartphone", "Electronics"},
        {5, "TV", "Electronics"},
        {6, "Blender", "Kitchen Appliances"},
        {7, "Toaster", "Kitchen Appliances"},
    };

    deque<string> recent_customers= {"C001", "C002", "C003"};

    recent_customers.push_back("C004");
    recent_customers.push_back("C005");

    list<Order> order_history;

    // orderId, productId, quantity, customerId, orderDate
    order_history.push_back({"ORD1", 1, 2, "C001", time(0)});
    order_history.push_back({"ORD2", 2, 1, "C002", time(0)});

    set<string> categories;
    for (auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> product_stock= {
        {1, 100},
        {2, 200},
        {3, 300},
        {4, 400},
        {5, 500},
        {6, 600},
        {7, 700},
    };

    multimap<string, Order> customer_orders;
    for (auto &order : order_history)
    {
        customer_orders.insert({order.customer_id, order});
    };

    unordered_map<string, string> customer_data= {
        {"C001", "Alice"},
        {"C002", "Bob"},
        {"C003", "Max"},
        {"C004", "Harry"},
        {"C005", "John"},
    };


    unordered_set<int> unique_product_ids;
    for(const auto &product: products) 
    {
        unique_product_ids.insert(product.product_id);
    };

    return 0;
}