#include <string>
#include <vector>
using namespace std;

class Item
{
    public:
        string name; // nombre
        int sellIn; // vender en (cantidad de días que se tiene para vender)
        int quality; // calidad (denota cuan valioso es el item)
        Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality) 
        {}
    };

class GildedRose
{
    public:
        vector<Item> & items;
        GildedRose(vector<Item> & items);
        
        void updateQuality();
};

