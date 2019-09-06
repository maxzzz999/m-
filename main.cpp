//
//  main.cpp
//  Online shopping cart (extended)
//
//  Created by Max-Mary Zorblewu on 5/5/19.
//  Copyright © 2019 Max-Mary Zorblewu. All rights reserved.
//

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <iostream>
#include <string>

using namespace std;

void PrintMenu(ShoppingCart shoppingList) {
    char userChoice;
    string itemName;
    string itemDescription;
    double itemPrice;
    int itemQuantity;
    ItemToPurchase item;
    ItemToPurchase item2;
    
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    
    cout << "Choose an option:" << endl;
    cin >> userChoice;
    
    while(userChoice != 'q') {
        if(userChoice == 'a'){
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, itemName);
            item.SetName(itemName);
            cout << "Enter the item's description:" << endl;
            getline(cin, itemDescription);
            item.SetDescription(itemDescription);
            cout << "Enter the item price:" << endl;
            cin >> itemPrice;
            item.SetPrice(itemPrice);
            cout << "Enter the item quantity:" << endl;
            cin >> itemQuantity;
            item.SetQuantity(itemQuantity);
            
            ItemToPurchase item1(itemName, itemPrice, itemQuantity, itemDescription);
            
            shoppingList.AddItem(item);
        
        }
        
        if(userChoice == 'd'){
            cout << "Enter the item name: " << endl;
            string newItemName;
            cin.ignore();
            getline(cin, newItemName);
            shoppingList.RemoveItem(newItemName);

        }
        
        if(userChoice == 'c'){
            cout << "Enter the item name" << endl;
            string newItemName2;
            cin.ignore();
            getline(cin, newItemName2);
            ItemToPurchase newItem;
            cout << "Enter the new quantity: " << endl;
            int newNum;
            cin >> newNum;
            newItem.SetName(newItemName2);
            newItem.SetQuantity(newNum);
            shoppingList.ModifyItem(newItem);
        }
        
        if(userChoice == 'i'){
            shoppingList.PrintDescription();
        }
        
        if(userChoice == 'o'){
            shoppingList.PrintTotal();
        }
        cout << "MENU" << endl;
        cout << "a - Add item to cart" << endl;
        cout << "d - Remove item from cart" << endl;
        cout << "c - Change item quantity" << endl;
        cout << "i - Output items' descriptions" << endl;
        cout << "o - Output shopping cart" << endl;
        cout << "q - Quit" << endl;
        
        cout << "Choose an option:" << endl;
        cin >> userChoice;
        
    }
}

int main() {
    string userName;
    string userDate;
    
    cout << "Enter customer's name:" << endl;
    getline(cin, userName);
    cin.ignore();
    cout << "Enter today's date:" << endl;
    getline(cin, userDate);
    
    cout << "Customer name: " << userName << endl;
    cout << "Today's date: " << userDate << endl;
    
    ShoppingCart shoppingItems;
    ShoppingCart userInfo(userName, userDate);
    
    PrintMenu(shoppingItems);
    
    return 0;
    
}
