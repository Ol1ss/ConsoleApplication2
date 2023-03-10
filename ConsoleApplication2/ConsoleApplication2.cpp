#include <iostream>
using namespace std;

class Three
{
    double price;
    double size;
public:
    Three()
    {
        this->price = 0;
        this->size = 0;
    }
    Three(double price, double size)
    {
        this->price = price;
        this->size = size;
    }
    void Show()
    {
        cout << "Price: " << this->price << "\nSize: " << this->size << endl;
    }
    double GetPrice()
    {
        return this->price;
    }
    double GetSize()
    {
        return this->size;
    }
    void SetPrice(double price)
    {
        this->price = price;
    }
    void SetSize(double size)
    {
        this->size = size;
    }
};

class Soil
{
    Three three;
public:
    Soil()
    {
        this->three = Three();
    }
    Soil(Three three)
    {
        this->three = Three(three.GetPrice(), three.GetSize());
    }
    Three GetThree()
    {
        return this->three;
    }
    void SetThree(Three three)
    {
        this->three = Three(three.GetPrice(), three.GetSize());
    }
};

void main()
{
    Three obj = Three(10, 15);
    obj.Show();
    Soil wind = Soil();
    if (wind.GetThree().GetPrice() == 0 && wind.GetThree().GetSize() == 0)
    {
        cout << "Everything is not ok" << endl;
    }
    else
    {
        cout << "Everything is ok" << endl;
    }
    wind.SetThree(obj);
    if (wind.GetThree().GetPrice() == 0 && wind.GetThree().GetSize() == 0)
    {
        cout << "Everything is not ok" << endl;
    }
    else
    {
        cout << "Everything is ok" << endl;
        wind.GetThree().Show();
    }
}