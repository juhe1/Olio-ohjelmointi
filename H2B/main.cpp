#include <iostream>
#include <vector>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string brand, string model, int yearModel)
        : brand(brand), model(model), yearModel(yearModel) {}

    void printData() const
    {
        cout << "Merkki: " << brand << ", "
             << "Malli: " << model << ", "
             << "Vuosimalli: " << yearModel << endl;
    }
};

int main()
{
    vector<Car> carList;

    carList.emplace_back("Toyota", "Corolla", 2015);
    carList.emplace_back("Ford", "Focus", 2018);
    carList.emplace_back("Tesla", "Model 3", 2022);

    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot:" << endl;
    for (Car& car : carList)
    {
        car.printData();
    }

    return 0;
}
