//
//  ItemToPurchase.cpp
//  Online shopping cart (extended)
//
//  Created by Max-Mary Zorblewu on 5/5/19.
//  Copyright © 2019 Max-Mary Zorblewu. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"


ItemToPurchase::ItemToPurchase() {
    name = "none";
    cost = 0;
    quantity = 0;
    description = "none";
}


void ItemToPurchase::SetName(string& itemName){
    name = itemName;
}

void ItemToPurchase::SetPrice(double& itemPrice){
    cost = itemPrice;
}
void ItemToPurchase::SetQuantity(int& itemQuantity){
    quantity = itemQuantity;
}
void ItemToPurchase::SetDescription(string& itemDescription){
    description = itemDescription;
}

string ItemToPurchase::GetName() const{
    return name;
}

double ItemToPurchase::GetPrice() const{
    return cost;
}

int ItemToPurchase::GetQuantity(){
    return quantity;
}

string ItemToPurchase::GetDescription(){
    return description;
}

ItemToPurchase::ItemToPurchase(string itemName, double itemPrice, int itemQuantity, string itemDescription) {
    name = itemName;
    cost = itemPrice;
    quantity = itemQuantity;
    description = itemDescription;
}


void ItemToPurchase::PrintItemCost(){
    cout << name << " " << quantity << " @ $" << cost << " = $" << static_cast<double>( cost * quantity) << endl;
}

void ItemToPurchase::PrintItemDescription(){
    cout << name << ": " << description << endl;
}
