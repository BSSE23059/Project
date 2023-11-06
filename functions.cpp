#include <iostream>
#include "functions.h"
#include <fstream>
using namespace std;

void searchInTheStock()
{

}

void wholeStock()
{
    typedef struct stock
    {
        string quantity;
    }st;
    stock coffeeBeans,cocoaPowder,Milk,WhippedCream,DryChocolate,ChocolateSyrup,
    Sugar,water,VanillaSyrup,RoastedHazelnutSyrup,CoconutSyrup,MapleSyrup,PeanutButter,
    MaraschinoCherry,VanillaIceCream,Honey,Peanuts,Hazelnuts,nutellaJars400g,AlmondMilk,
    Yogurt,Blueberry,Strawberry,Raspberry,ProteinPowder,Banana,Avocado,Mango;
    coffeeBeans.quantity= "30 kg";
    cocoaPowder.quantity= "50 kg";
    DryChocolate.quantity= "10 kg";
    ChocolateSyrup.quantity= "30 kg";
    Sugar.quantity= "80 kg";
    Honey.quantity = "10 kg";
    PeanutButter.quantity = "20 kg";
    Peanuts.quantity = "5 kg";
    MaraschinoCherry.quantity = "25 kg";
    VanillaIceCream.quantity = "40 kg";
    nutellaJars400g.quantity = "150 Jars";
    Hazelnuts.quantity = "15 kg";
    Raspberry.quantity = "30 kg";
    Blueberry.quantity = "40 kg";
    Strawberry.quantity = "50 kg";
    ProteinPowder.quantity = "10 kg";
    Banana.quantity = "20 dozens";
    Avocado.quantity = "30 kg";
    Mango.quantity = "40 kg";
    AlmondMilk.quantity = "50 liters";
    Yogurt.quantity = "10 liters";
    Milk.quantity= "100 liters";
    WhippedCream.quantity= "20 liters";
    water.quantity= "100 liters";
    VanillaSyrup.quantity= "15 liters";
    RoastedHazelnutSyrup.quantity= "10 liters";
    CoconutSyrup.quantity= "15 liters";
    MapleSyrup.quantity= "5 liters";


    cout << "\tItem\t\t\t" << "Quantity " << endl << endl;
    cout << "Coffee Beans\t\t\t "<< coffeeBeans.quantity << endl;
    cout << "Cocoa Powder\t\t\t "<< cocoaPowder.quantity << endl;
    cout << "Dry Chocolate\t\t\t "<< DryChocolate.quantity << endl;
    cout << "Chocolate Syrup\t\t\t "<< ChocolateSyrup.quantity << endl;
    cout << "Sugar\t\t\t\t "<< Sugar.quantity << endl;
    cout << "Maraschino Cherry\t\t " << MaraschinoCherry.quantity << endl;
    cout << "Vanilla IceCream\t\t " << VanillaIceCream.quantity << endl;
    cout << "Honey\t\t\t\t "<< Honey.quantity << endl;
    cout << "Peanut butter\t\t\t " << PeanutButter.quantity << endl;
    cout << "Peanuts\t\t\t\t "<< Peanuts.quantity << endl;
    cout << "Nutella Jars\t\t\t " << nutellaJars400g.quantity << endl;
    cout << "Hazelnuts\t\t\t "<< Hazelnuts.quantity << endl;
    cout << "Blueberry\t\t\t " << Blueberry.quantity << endl;
    cout << "Raspberry\t\t\t " << Raspberry.quantity << endl;
    cout << "Strawberry\t\t\t " << Strawberry.quantity << endl;
    cout << "Mango\t\t\t\t " << Mango.quantity << endl;
    cout << "Avocado\t\t\t\t " << Avocado.quantity << endl;
    cout << "Banana\t\t\t\t " << Banana.quantity << endl;
    cout << "Protein Powder\t\t\t " << ProteinPowder.quantity << endl;
    cout << "Almond Milk\t\t\t " << AlmondMilk.quantity << endl;
    cout << "Yogurt\t\t\t\t " << Yogurt.quantity << endl;
    cout << "Milk\t\t\t\t "<< Milk.quantity << endl;
    cout << "Whipped Cream\t\t\t "<< WhippedCream.quantity << endl;
    cout << "Water\t\t\t\t "<< water.quantity << endl;
    cout << "Vanilla Syrup\t\t\t "<< VanillaSyrup.quantity << endl;
    cout << "Roasted Hazelnut Syrup\t\t "<< RoastedHazelnutSyrup.quantity << endl;
    cout << "Coconut Syrup \t\t\t " << CoconutSyrup.quantity << endl;
    cout << "Maple Syrup\t\t\t " << MapleSyrup.quantity << endl;


    ofstream  out("./../Stock.txt", ios:: out | ios::trunc);
    if(out.is_open())
    {
        out  << "\tITEM\t\t\t" << "\t\tQuantity " << endl<<endl;
        out  << "Coffee-Beans \t\t\t\t"<< coffeeBeans.quantity << endl;
        out  << "Cocoa-Powder \t\t\t\t"<< cocoaPowder.quantity << endl;
        out  << "Dry Chocolate \t\t\t\t"<< DryChocolate.quantity << endl;
        out  << "Chocolate Syrup \t\t\t"<< ChocolateSyrup.quantity << endl;
        out  << "Sugar \t\t\t\t\t\t"<< Sugar.quantity << endl;
        out  << "Maraschino Cherry\t\t\t" << MaraschinoCherry.quantity << endl;
        out  << "Vanilla IceCream\t\t\t" << VanillaIceCream.quantity << endl;
        out  << "Honey\t\t\t\t\t\t" << Honey.quantity << endl;
        out  << "Peanut Butter\t\t\t\t"<< PeanutButter.quantity << endl;
        out  << "Peanuts\t\t\t\t\t\t" << Peanuts.quantity << endl;
        out  << "Nutella Jars\t\t\t\t"<< nutellaJars400g.quantity << endl;
        out  << "Hazelnuts\t\t\t\t\t" << Hazelnuts.quantity << endl;
        out  << "Strawberries\t\t\t\t" << Strawberry.quantity << endl;
        out  << "Blueberries\t\t\t\t\t" << Blueberry.quantity << endl;
        out  << "Raspberries\t\t\t\t\t" << Raspberry.quantity << endl;
        out  << "Banana\t\t\t\t\t\t" << Banana.quantity << endl;
        out  << "Mango\t\t\t\t\t\t" << Mango.quantity << endl;
        out  << "Protein Powder\t\t\t\t" << ProteinPowder.quantity << endl;
        out  << "Avocado\t\t\t\t\t\t" << Avocado.quantity << endl;
        out  << "Milk \t\t\t\t\t\t"<< Milk.quantity << endl;
        out  << "Almond Milk\t\t\t\t\t" << AlmondMilk.quantity << endl;
        out  << "Yogurt\t\t\t\t\t\t" << Yogurt.quantity << endl;
        out  << "Whipped Cream \t\t\t\t"<< WhippedCream.quantity << endl;
        out  << "Water \t\t\t\t\t\t"<< water.quantity << endl;
        out  << "Roasted Hazelnut Syrup \t\t"<< RoastedHazelnutSyrup.quantity << endl;
        out  << "Coconut Syrup \t\t\t\t"<< CoconutSyrup.quantity << endl;
        out  << "Maple Syrup \t\t\t\t"<< MapleSyrup.quantity << endl;
        out.close();
    }

    else
    {
        cout << "Not open" << endl;
    }
}

void enterItemInTheStock()
{

}
