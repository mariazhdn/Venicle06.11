#include <iostream>
#include <string>
using namespace std;

class Vehicle 
{
protected:
    int wheels;
    string model;
    string color;
    int year;
    double price;
    double speed;
public:
    Vehicle() {}
    Vehicle(int wh, string md, string col, int yr, double pr, double sp)
    {
        wheels = wh;
        model = md;
        color = col;
        year = yr;
        price = pr;
        speed = sp;
    }
    virtual void Print()
    {
        cout << "Wheels: " << wheels << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
    }
};

class Moped : public Vehicle
{
    int engine;
    int seats;
    public:
    Moped() {}
    Moped(int wh, string md, string col, int yr, double pr, double sp, int ev, int st) : Vehicle(wh, md, col, yr, pr, sp)
    {
        engine = ev;
        seats = st;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "Engine Volume: " << engine << endl;
        cout << "How many people can sit: " << seats << endl;
    }
    virtual void Init() 
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        engine = 0;
        seats = 0;
    }
};

class Bicycle : public Vehicle
{
    string tormoz;
    bool basket;
    public:
    Bicycle() {}
    Bicycle(int wh, string md, string col, int yr, double pr, double sp, string tr, bool bs) : Vehicle(wh, md, col, yr, pr, sp)
    {
        tormoz = tr;
        basket = bs;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "Tormoz type: " << tormoz << endl;
        cout << "It has basket? : " << basket << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        tormoz = "";
        basket = false;
    }
};

class Car : public Vehicle
{
    int doors;
    int seats;
    public:
    Car() {}
    Car(int wh, string md, string col, int yr, double pr, double sp, int dr, int st)
        : Vehicle(wh, md, col, yr, pr, sp)
    {
        doors = dr;
        seats = st;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "Doors: " << doors << endl;
        cout << "How many people can sit: " << seats << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        doors = 0;
        seats = 0;
    }
};

class OffRoad : public Vehicle
{
    int seats;
    public:
    OffRoad() {}
    OffRoad(int wh, string md, string col, int yr, double pr, double sp, bool st)
        : Vehicle(wh, md, col, yr, pr, sp)
    {
        seats = st;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "How many people can sit: " << seats << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        seats = 0;
    }
};

class Bus : public Vehicle
{
    int passenger;
    int doors;
    public:
    Bus() {}
    Bus(int wh, string md, string col, int yr, double pr, double sp, int pc, int dr)
        : Vehicle(wh, md, col, yr, pr, sp)
    {
        passenger = pc;
        doors = dr;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "Passenger Capacity: " << passenger << endl;
        cout << "Count of doors: " << doors << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        passenger = 0;
        doors = 0;
    }
};

class Truck : public Vehicle
{
    double loadCapacity;
public:
    Truck() {}
    Truck(int wh, string md, string col, int yr, double pr, double sp, double lc)
        : Vehicle(wh, md, col, yr, pr, sp)
    {
        loadCapacity = lc;
    }
    virtual void Print()
    {
        Vehicle::Print();
        cout << "Load Capacity: " << loadCapacity << " kg" << endl;
    }
    virtual void Init()
    {
        wheels = 0;
        model = "";
        color = "";
        year = 0;
        price = 0.0;
        speed = 0.0;
        loadCapacity = 0;
    }
};

int main()
{
    /*
    Moped myMoped(2, "Yamaha Jog", "Black", 2022, 1850.5, 65.0, 49, 1);
    cout << " Moped: " << endl;
    myMoped.Print();
    cout << endl;

    Bicycle myBicycle(2, "Giant Talon", "Blue", 2024, 620.0, 30.0, "Hydraulic Disc", false);
    cout << " Bicycle: " << endl;
    myBicycle.Print();
    cout << endl;

    Car myCar(4, "Audi e-tron GT", "Daytona Gray", 2024, 105000.0, 245.0, 4, 5);
    cout << " Car: " << endl;
    myCar.Print();
    cout << endl;

    OffRoad myOffRoad(4, "Jeep Wrangler", "Dark Green", 2021, 38000.0, 175.0, 4);
    cout << " Off-Road: " << endl;
    myOffRoad.Print();
    cout << endl;

    Bus myBus(6, "Mercedes-Benz Sprinter", "Silver", 2020, 55000.0, 120.0, 20, 2);
    cout << " Bus: " << endl;
    myBus.Print();
    cout << endl;

    Truck myTruck(8, "Volvo FH16", "White", 2022, 125000.0, 110.0, 20000.0);
    cout << " Truck: " << endl;
    myTruck.Print();
    cout << endl;
    */

    //

    Vehicle* vehicle = nullptr;

    int choice = 0;

    cout << "1. Moped" << endl;
    cout << "2. Bicycle" << endl;
    cout << "3. Car" << endl;
    cout << "4. Off-Road" << endl;
    cout << "5. Bus" << endl;
    cout << "6. Truck" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 1:
            vehicle = new Moped(2, "Yamaha Jog", "Black", 2022, 1850.5, 65.0, 49, 1);
            break;
        case 2:
            vehicle = new Bicycle(2, "Giant Talon", "Blue", 2024, 620.0, 30.0, "Hydraulic Disc", false);
            break;
        case 3: 
            vehicle = new Car(4, "Audi e-tron GT", "Daytona Gray", 2024, 105000.0, 245.0, 4, 5);
            break;
        case 4: 
            vehicle = new OffRoad(4, "Jeep Wrangler", "Dark Green", 2021, 38000.0, 175.0, 4);
            break;
        case 5: 
            vehicle = new Bus(6, "Mercedes-Benz Sprinter", "Silver", 2020, 55000.0, 120.0, 20, 2);
            break;
        case 6: 
            vehicle = new Truck(8, "Volvo FH16", "White", 2022, 125000.0, 110.0, 20000.0);
            break;
        default:
            cout << "Wrong choice!" << endl;
            return 1;
    }

    vehicle->Print();

    return 0;
}