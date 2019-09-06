//
//  ShopingCart.cpp
//  Online shopping cart (extended)
//
//  Created by Max-Mary Zorblewu on 5/5/19.
//  Copyright © 2019 Max-Mary Zorblewu. All rights reserved.
//

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <iostream>
#include <vector>
using namespace std;

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";
}
ShoppingCart::ShoppingCart(string name, string date){
    customerName = name;
    currentDate = date;
}
string ShoppingCart::GetCustomerName(){
    return customerName;
}
string ShoppingCart::GetDate(){
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase& item){
    cartItems.push_back(item);
}
void ShoppingCart::RemoveItem(string& itemName1){
    for(int i = 0; i < cartItems.size(); ++i){
        if(itemName1 == cartItems.at(i).GetName()){
            cartItems.erase(cartItems.begin()+i);
        }
        else{
            cout << "Item not found in cart. Nothing removed" << endl;
        }
    }
}
int ShoppingCart::GetNumItemsInCart(){
    int sum = 0;
    for (unsigned int i = 0; i < cartItems.size(); ++i){
        sum += cartItems.at(i).GetQuantity();
    }
    return sum;
}

void ShoppingCart::ModifyItem(ItemToPurchase &newItem){
    for(unsigned int i = 0; i < cartItems.size(); ++i){
        if(newItem.GetName() == cartItems.at(i).GetName()){
            int newNum2 = newItem.GetQuantity();
            cartItems.at(i).SetQuantity(newNum2);
        }
        else{
            cout << "Item not found in cart. Nothing modified" << endl;
        }
    }
}

double ShoppingCart::GetCostOfCart(){
    double sum = 0;
    for (unsigned int i = 0; i < cartItems.size(); ++i){
        sum += cartItems.at(i).GetPrice();
    }
    return sum;
}

void ShoppingCart::PrintTotal(){
    if(cartItems.empty()){
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
    else{
        for(unsigned int i = 0;i < cartItems.size(); ++i){
            cout << cartItems.at(i).GetName() << " " << cartItems.at(i).GetQuantity() << " @ $" << cartItems.at(i).GetPrice() << " = $" << static_cast<double>( cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity()) << endl;
        }
    }
    
}

void ShoppingCart::PrintDescription(){
    for (unsigned int i = 0; i < cartItems.size();++i){
        cout << cartItems.at(i).GetName() << ":" << cartItems.at(i).GetDescription() << endl;
    }
}
