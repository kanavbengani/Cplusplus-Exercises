#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int Menu()
{
    cout << "Menu: " << endl
         << "1. Burgers" << endl
         << "2. Pizzas" << endl
         << "3. Sodas" << endl;
    return 0;
}

std::vector<std::tuple<std::string, int>> Burgers(bool print)
{
    std::vector<std::tuple<std::string, int>> burgerVect;

    burgerVect.emplace_back("Veggie Burger", 3);
    burgerVect.emplace_back("Chicken Burger", 4);
    burgerVect.emplace_back("Beef Burger", 5);

    if (print == true)
    {
        for (int burger = 0; burger < burgerVect.size(); burger++)
        {
            cout << burger + 1 << ". " << std::get<0>(burgerVect.at(burger)) << ": $" << std::get<1>(burgerVect.at(burger)) << endl;
        }
    }
    else
    {
        return burgerVect;
    }
    return {};
}

std::vector<std::tuple<std::string, int>> Pizzas(bool print)
{
    std::vector<std::tuple<std::string, int>> pizzaVect;

    pizzaVect.emplace_back("Veggie Pizza", 10);
    pizzaVect.emplace_back("Pepperoni Pizza", 12);
    pizzaVect.emplace_back("Combo Pizza", 15);

    if (print == true)
    {
        for (int pizza = 0; pizza < pizzaVect.size(); pizza++)
        {
            cout << pizza + 1 << ". " << std::get<0>(pizzaVect.at(pizza)) << ": $" << std::get<1>(pizzaVect.at(pizza)) << endl;
        }
    }
    else
    {
        return pizzaVect;
    }
    return {};
}

std::vector<std::tuple<std::string, int>> Sodas(bool print)
{
    std::vector<std::tuple<std::string, int>> sodaVect;

    sodaVect.emplace_back("Coke", 1);
    sodaVect.emplace_back("Fanta", 1);
    sodaVect.emplace_back("Ginger Ale", 1);

    if (print == true)
    {
        for (int soda = 0; soda < sodaVect.size(); soda++)
        {
            cout << soda + 1 << ". " << std::get<0>(sodaVect.at(soda)) << ": $" << std::get<1>(sodaVect.at(soda)) << endl;
        }
    }
    else
    {
        return sodaVect;
    }
    return {};
}

std::string returnS(int a)
{
    if (a != 1)
    {
        return "s";
    }
    else
    {
        return "";
    }
}

int main()
{
    int i = 0, orderOrNot, item, type, price, amt, total = 0, changes = 0, quantityChange;
    bool print;
    std::vector<std::tuple<std::string, int>> burgerVect = Burgers(print = false);
    std::vector<std::tuple<std::string, int>> pizzaVect = Pizzas(print = false);
    std::vector<std::tuple<std::string, int>> sodaVect = Sodas(print = false);
    std::vector<std::tuple<std::string, int, int, int>> orderList; // String = Item Name, 1st Int = Item Amount, 2nd Int = Item Price, 3rd Int = Item Price*Amount

    for (int j = 0; j > -1; j++)
    {
        if (i == 0)
        {
            cout << "Would you like to order?" << endl
                 << "1. Yes" << endl
                 << "2. No" << endl;
            i = 1;
        }
        else
        {
            cout << endl
                 << "Would you like to order anything else?" << endl
                 << "1. Yes" << endl
                 << "2. No" << endl;
        }
        cin >> orderOrNot;
        cout << endl;

        if (orderOrNot == 1)
        {
            Menu();
            cout << "Pick a Number: ";
            cin >> item;
            switch (item)
            {
            case 1: // Burgers
                Burgers(print = true);
                cout << "Pick a Number: ";
                cin >> type;
                switch (type)
                {
                case 1: // Veggie Burger
                    cout << endl
                         << "How many " << std::get<0>(burgerVect.at(0)) << "s would you like: ";
                    price = std::get<1>(burgerVect.at(0));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(burgerVect.at(0)), amt, price, amt * price);
                    break;
                case 2: // Chicken Burger
                    cout << endl
                         << "How many " << std::get<0>(burgerVect.at(1)) << "s would you like: ";
                    price = std::get<1>(burgerVect.at(1));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(burgerVect.at(1)), amt, price, amt * price);
                    break;
                case 3: // Beef Burger
                    cout << endl
                         << "How many " << std::get<0>(burgerVect.at(2)) << "s would you like: ";
                    price = std::get<1>(burgerVect.at(2));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(burgerVect.at(2)), amt, price, amt * price);
                    break;
                default: // Invalid
                    cout << endl
                         << "Invalid. Try again!" << endl
                         << endl;
                    if (i = 0)
                    {
                        i = 0;
                    }
                    break;
                }
                break;
            case 2: // Pizzas
                Pizzas(print = true);
                cout << "Pick a Number: ";
                cin >> type;
                switch (type)
                {
                case 1: // Veggie Pizza
                    cout << endl
                         << "How many " << std::get<0>(pizzaVect.at(0)) << "s would you like: ";
                    price = std::get<1>(pizzaVect.at(0));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(pizzaVect.at(0)), amt, price, amt * price);
                    break;
                case 2: // Pepperoni Pizza
                    cout << endl
                         << "How many " << std::get<0>(pizzaVect.at(1)) << "s would you like: ";
                    price = std::get<1>(pizzaVect.at(1));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(pizzaVect.at(1)), amt, price, amt * price);
                    break;
                case 3: // Combo Pizza
                    cout << endl
                         << "How many " << std::get<0>(pizzaVect.at(2)) << "s would you like: ";
                    price = std::get<1>(pizzaVect.at(2));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(pizzaVect.at(2)), amt, price, amt * price);
                    break;
                default: // Invalid
                    cout << endl
                         << "Invalid. Try again!" << endl
                         << endl;
                    if (i = 0)
                    {
                        i = 0;
                    }
                    break;
                }
                break;
            case 3: // Sodas
                Sodas(print = true);
                cout << "Pick a Number: ";
                cin >> type;
                switch (type)
                {
                case 1: // Coke
                    cout << endl
                         << "How many " << std::get<0>(sodaVect.at(0)) << "s would you like: ";
                    price = std::get<1>(sodaVect.at(0));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(sodaVect.at(0)), amt, price, amt * price);
                    break;
                case 2: // Fanta
                    cout << endl
                         << "How many " << std::get<0>(sodaVect.at(1)) << "s would you like: ";
                    price = std::get<1>(sodaVect.at(1));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(sodaVect.at(1)), amt, price, amt * price);
                    break;
                case 3: // Ginger Ale
                    cout << endl
                         << "How many " << std::get<0>(sodaVect.at(2)) << "s would you like: ";
                    price = std::get<1>(sodaVect.at(2));
                    cin >> amt;
                    total += price * amt;
                    orderList.emplace_back(std::get<0>(sodaVect.at(2)), amt, price, amt * price);
                    break;
                default: // Invalid
                    cout << endl
                         << "Invalid. Try again!" << endl
                         << endl;
                    if (i = 0)
                    {
                        i = 0;
                    }
                    break;
                }
                break;
            default:
                cout << endl
                     << "Invalid. Try again!" << endl
                     << endl;
                break;
            }
        }
        else
        {
            while (changes != 1)
            {
                cout << "Here's what you've bought:" << endl;
                for (int order = 0; order < orderList.size(); order++)
                {
                    int a = std::get<1>(orderList.at(order));
                    cout << order + 1 << ". " << std::get<1>(orderList.at(order)) << " " << std::get<0>(orderList.at(order)) << returnS(a) << endl;
                }
                cout << "Your total is $" << total << "." << endl
                     << endl;
                cout << "Would you like to make any changes or are you sastisfied?" << endl
                     << "1. Add Another Item" << endl
                     << "2. Change a Quantity" << endl
                     << "3. Delete an Item" << endl
                     << "4. Satisfied" << endl
                     << "Pick one of the above: ";
                cin >> changes;
                switch (changes)
                {
                case 1:
                    break;
                case 2:
                    for (int order = 0; order < orderList.size(); order++)
                    {
                        int a = std::get<1>(orderList.at(order));
                        cout << order + 1 << ". " << std::get<1>(orderList.at(order)) << " " << std::get<0>(orderList.at(order)) << returnS(a) << endl;
                    }
                    cout << endl
                         << "Which quantity would you like to change (Pick a Number): ";
                    cin >> quantityChange;
                    if (quantityChange <= orderList.size() && quantityChange >= 1)
                    {
                        total -= std::get<3>(orderList.at(quantityChange - 1));
                        remove(orderList.at(quantityChange - 1));
                        cout << endl
                             << "Here's your new order: " << endl;
                        for (int order = 0; order < orderList.size(); order++)
                        {
                            int a = std::get<1>(orderList.at(order));
                            cout << order + 1 << ". " << std::get<1>(orderList.at(order)) << " " << std::get<0>(orderList.at(order)) << returnS(a) << endl;
                        }
                        cout << endl
                             << "Are you satisfied?" << endl
                             << "1. Yes" << endl
                             << "2. No, I want to make more changes." << endl
                             << "Pick a number: ";
                        cin >> changes;
                        if (changes == 1)
                        {
                            cout << endl
                                 << "This is your final order: " << endl;
                            for (int order = 0; order < orderList.size(); order++)
                            {
                                int a = std::get<1>(orderList.at(order));
                                cout << order + 1 << ". " << std::get<1>(orderList.at(order)) << " " << std::get<0>(orderList.at(order)) << returnS(a) << endl;
                            }
                            cout << "Your total is $" << total << "." << endl
                                 << endl;
                            cout << "Thanks for your payment. \nYour order will be out shortly!" << endl;
                            return 0;
                        }
                    }
                    else
                    {
                        cout << endl
                             << "Invalid input. Try again!" << endl;
                        break;
                    }
                    return 0;
                case 3:
                    cout << "** MAKE A WAY TO DELETE ITEM **" << endl;
                default:
                    cout << "This is your final order: " << endl;
                    for (int order = 0; order < orderList.size(); order++)
                    {
                        int a = std::get<1>(orderList.at(order));
                        cout << order + 1 << ". " << std::get<1>(orderList.at(order)) << " " << std::get<0>(orderList.at(order)) << returnS(a) << endl;
                    }
                    cout << "Your total is $" << total << "." << endl
                         << endl;
                    cout << "Thanks for your payment. \nYour order will be out shortly!" << endl;
                    return 0;
                }
            }
        }
    }
}

/*
WAP that simply asks  au ser 
    1. Burger
        a. 
            Price
        b. 
    2. Col Drink



    Bill amount
    Switch case
    all the information has to be gathered in an array
*/