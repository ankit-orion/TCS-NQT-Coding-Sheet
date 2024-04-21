// fully automatic vending machine dispenses your cuppa on ust the
// press of a button. A vending machine can server range of products as follows
// Coffee
// 1. Espresso Coffee
// 2. Cappuccino Coffee
// 3. Latte Coffee
// Tea
// 1. Plain Tea
// 2. Assam Tea
// 3. Ginger Tea
// 4. Cardamom Tea
// 5. Masala Tea
// 6. Lemon Tea
// 7. Green Tea
// 8. Organic Darjeeling Tea
// Soups
// 1. Hot and Sour Soup
// 2. Veg Corn Soup
// 3. Tomato Soup
// 4. Spicy Tomato Soup
// Beverages
// 1. Hot Chocolate Drink
// 2. Badam Drink
// 3. Badam-Pista Drink
// Write a program to take input for main menu & sub menu and display the name of sub menu selected in the following format
// this problem was asked in TCS NQT 2020
// enter first letter to select main menu
// C or c for coffee
// T or t for tea
// S or s for soup
// B or b for beverages
// Welcome to CCD
// Enjoy your <name of sub menu>
// Example 1
// Input
// C
// 1
// Output
// Welcome to CCD
// Enjoy your Espresso Coffee
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string choice;
    string arr[4] = {"Coffee", "Tea", "Soup", "Beverages"};
    string coffee[3] = {"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"};
    string tea[8] = {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"};
    string soup[4] = {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"};
    string beverages[3] = {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"};
    cout <<"Enter the first letter of the main menu\nC or c for Coffee\nT or t for Tea\nS or s for Soup\nB or b for Beverages\n";
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
    if(choice == "C"){
        int sub_choice;
        cout << "1. Espresso Coffee\n2. Cappuccino Coffee\n3. Latte Coffee\n";
        cin >> sub_choice;
        cout << "Welcome to CCD\nEnjoy your " << coffee[sub_choice - 1];
    }
    else if(choice == "T"){
        int sub_choice;
        cout << "1. Plain Tea\n2. Assam Tea\n3. Ginger Tea\n4. Cardamom Tea\n5. Masala Tea\n6. Lemon Tea\n7. Green Tea\n8. Organic Darjeeling Tea\n";
        cin >> sub_choice;
        cout << "Welcome to CCD\nEnjoy your " << tea[sub_choice - 1];
    }
    else if(choice == "S"){
        int sub_choice;
        cout << "1. Hot and Sour Soup\n2. Veg Corn Soup\n3. Tomato Soup\n4. Spicy Tomato Soup\n";
        cin >> sub_choice;
        cout << "Welcome to CCD\nEnjoy your " << soup[sub_choice - 1];
    }
    else if(choice == "B"){
        int sub_choice;
        cout << "1. Hot Chocolate Drink\n2. Badam Drink\n3. Badam-Pista Drink\n";
        cin >> sub_choice;
        cout << "Welcome to CCD\nEnjoy your " << beverages[sub_choice - 1];
    }
    else{
        cout << "Invalid Input";
    }
    return 0;
}