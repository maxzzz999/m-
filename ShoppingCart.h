//
//  ShopingCart.hpp
//  Online shopping cart (extended)
//
//  Created by Max-Mary Zorblewu on 5/5/19.
//  Copyright © 2019 Max-Mary Zorblewu. All rights reserved.
//

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart {
public:
    
    ShoppingCart();
    ShoppingCart(string name, string date);
    string GetCustomerName();
    string GetDate();
    void AddItem(ItemToPurchase& item);
    void ModifyItem(ItemToPurchase& newItem);
    void RemoveItem(string& itemName1);
    int GetNumItemsInCart();
    double GetCostOfCart();
    void PrintTotal();
    void PrintDescription();
    
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;
    
};

#endif /* ShopingCart_hpp */
