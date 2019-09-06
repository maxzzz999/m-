//
//  ItemToPurchase.hpp
//  Online shopping cart (extended)
//
//  Created by Max-Mary Zorblewu on 5/5/19.
//  Copyright © 2019 Max-Mary Zorblewu. All rights reserved.
//

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string& itemName);
    string GetName() const;
    void SetPrice(double& itemPrice);
    double GetPrice() const;
    void SetQuantity(int& itemQuantity);
    int GetQuantity();
    void SetDescription(string& itemDescription);
    string GetDescription();
    ItemToPurchase(string itemName, double itemPrice, int itemQuantity, string itemDescription);
    void PrintItemCost();
    void PrintItemDescription();
    
private:
    string name;
    double cost;
    int quantity;
    string description;
};

#endif /* ItemToPurchase_hpp */

