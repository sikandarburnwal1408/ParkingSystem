#include <iostream>
#include <unordered_map>
using namespace std;

int totalArea = 1000;
int occurArea = 0;
int money = 0;
unordered_map<string, string> mpcycle;
unordered_map<string, string> mpmotorcycle;
unordered_map<string, string> mprickshaw;
unordered_map<string, string> mpfourwheeler;
unordered_map<string, string> mpsixwheeler;
unordered_map<string, string> mpothers;

unordered_map<string, string>::iterator it1 = mpcycle.begin();
unordered_map<string, string>::iterator it2 = mpmotorcycle.begin();
unordered_map<string, string>::iterator it3 = mprickshaw.begin();
unordered_map<string, string>::iterator it4 = mpfourwheeler.begin();
unordered_map<string, string>::iterator it5 = mpsixwheeler.begin();
unordered_map<string, string>::iterator it6 = mpothers.begin();


void showOptions(void)
{
    cout << "\t1.  New parking vehicle enroll" << endl
         << "\t2.  Delete the vehicle's record" << endl
         << "\t3.  Show the current status" << endl
         << "\t4.  Money status" << endl
         << "\t5.  Query" << endl
         << "\t6.  Exit" << endl;
}

void showvehicles(void)
{
    cout << "This parking area is available for all of the vehicles." << endl
         << "Here is full information of vehicles with charges" << endl
         << "\ta)  Cycle                   -- 10 rs" << endl
         << "\tb)  Motorcycle              -- 30 rs" << endl
         << "\tc)  Richshaw                -- 50 rs" << endl
         << "\td)  Four wheeler            -- 100 rs" << endl
         << "\te)  Six wheeler             -- 200 rs" << endl
         << "\tf)  More than Six wheelers  -- 400 rs" << endl;
}

void showdetails(void)
{
    cout << "There are six sections: " << endl;
    cout << "\ta)  Cycle      \tb)  Motorcycle \tc)Rickshaw" << endl
         << "\td)  4 wheelers \te)  6 wheelers \tf) More than 6 wheelers" << endl;
    cout << "From which department you want to show all status:";
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        if (mpcycle.empty())
        {
            cout << "There are no cycles which are parked." << endl;
            break;
        }
        cout << "Details for Cycle parking are:" << endl;
        for (auto &&i : mpcycle)
        {
            cout << "Customer's name:" << i.second << " &  Cycle's number:" << i.first << endl;
        }
        cout<<endl;
        break;
    case 'b':
        if (mpmotorcycle.empty())
        {
            cout << "There are no Motorcycles which are parked." << endl;
            break;
        }
        cout << "Details for Motorcycle parking are:" << endl;
        for (auto &&i : mpmotorcycle)
        {
            cout << "Customer's name:" << i.second << " &  Motorcycle's number:" << i.first << endl;
        }
        cout<<endl;
        break;
    case 'c':
        if (mprickshaw.empty())
        {
            cout << "There are no Rickshaws which are parked." << endl;
            break;
        }
        cout << "Details for Rickshaw parking are:" << endl;
        for (auto &&i : mprickshaw)
        {
            cout << "Customer's name:" << i.second << " &  Rickshaw's number:" << i.first << endl;
        }
        cout<<endl;
        break;
    case 'd':
        if (mpfourwheeler.empty())
        {
            cout << "There are no four wheeler vehicles which are parked." << endl;
            break;
        }
        cout << "Details for Four wheeler vehicle parking are:" << endl;
        for (auto &&i : mpfourwheeler)
        {
            cout << "Customer's name:" << i.second << " &  Four wheeler's number:" << i.first << endl;
        }
        cout<<endl;
        break;
    case 'e':
        if (mpsixwheeler.empty())
        {
            cout << "There are no six wheeler vehicles which are parked." << endl;
            break;
        }
        cout << "Details for Six wheeler vehicle parking are:" << endl;
        for (auto &&i : mpsixwheeler)
        {
            cout << "Customer's name:" << i.second << " &  Six wheeler's number:" << i.first << endl;
        }
        cout<<endl;
        break;
    case 'f':
        if (mpothers.empty())
        {
            cout << "There are no vehicles of more than six wheelers which are parked." << endl;
            break;
        }
        cout << "Details for other vehicle parking are:" << endl;
        for (auto &&i : mpothers)
        {
            cout << "Customer's name:" << i.second << " &  other category's vehicle number:" << i.first << endl;
        }
        cout<<endl;
        break;

    default: cout<<endl;
        break;
    }
}

void showQuery(void)
{
    cout << "\tA)  Which type of vehicle we can park" << endl
         << "\tB)  What is the price for parking a vehicle" << endl
         << "\tC)  Is there space available in this Area for parking" << endl;
}

void queryAnswer(void)
{
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 'A':
        cout << "This parking Area is avaible for every vehicles like Bycycle, Motorcycle, Richshaw, four wheelers etc.";
        break;
    case 'a':
        cout << "This parking Area is avaible for every vehicles like Bycycle, Motorcycle, Richshaw, four wheelers etc.";
        break;
    case 'B':
        showvehicles();
        break;
    case 'b':
        showvehicles();
        break;
    case 'C':
        if (totalArea == occurArea)
        {
            cout << "There is no space in Parking Site" << endl;
        }
        else
        {
            cout << "Parking area is not full. There is " << ((totalArea - occurArea) / totalArea) * 100 << " % area empty." << endl;
        }
        break;
    case 'c':
        if (totalArea == occurArea)
        {
            cout << "There is no space in Parking Site" << endl;
        }
        else
        {
            cout << "Parking area is not full. There is " << ((totalArea - occurArea) / totalArea) * 100 << " % area empty." << endl;
        }
        break;
    default:
        cout << "Invalid Selection" << endl;
        break;
    }
}

void enrollVehicle(void)
{
    cout << "Choose vehicle which want to park in this parking Area" << endl;
    showvehicles();
    char ch;
    cin >> ch;
    string costname, vehicnum;
    cout << "Enter the Custumer's name and Vehicle's number:";
    cin >> costname >> vehicnum;
    switch (ch)
    {
    case 'a':
        money += 10;
        mpcycle[vehicnum] = costname;
        break;
    case 'b':
        money += 30;
        mpmotorcycle[vehicnum] = costname;
        break;
    case 'c':
        money += 50;
        mprickshaw[vehicnum] = costname;
        break;
    case 'd':
        money += 100;
        mpfourwheeler[vehicnum] = costname;
        break;
    case 'e':
        money += 200;
        mpsixwheeler[vehicnum] = costname;
        break;
    case 'f':
        money += 400;
        mpothers[vehicnum] = costname;
        break;
    default:
        break;
    }
}

void deleteVehicle(void)
{
    cout << "Choose which vehicle details you want to delete:" << endl;
    cout << "\ta)  Cycle      \tb)  Motorcycle \tc)Rickshaw" << endl
         << "\td)  4 wheelers \te)  6 wheelers \tf) More than 6 wheelers" << endl;
    char ch;
    cout << "Your option is :";
    cin >> ch;
    string str;
    cout << "Enter the vehicle's number: ";
    cin >> str;
    switch (ch)
    {
    case 'a':
        it1 = mpcycle.find(str);
        if (it1 != mpcycle.end())
        {
            money -= 10;
            mpcycle.erase(it1);
            cout<<it1->second<<"'s vehicle ("<<it1->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;
    case 'b':
        it2 = mpmotorcycle.find(str);
        if (it2 != mpmotorcycle.end())
        {
            money -= 30;
            mpmotorcycle.erase(it2);
            cout<<it2->second<<"'s vehicle ("<<it2->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;
    case 'c':
        it3 = mprickshaw.find(str);
        if (it3 != mprickshaw.end())
        {
            money -= 50;
            mprickshaw.erase(it3);
            cout<<it3->second<<"'s vehicle ("<<it3->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;
    case 'd':
        it4 = mpfourwheeler.find(str);
        if (it4 != mpfourwheeler.end())
        {
            money -= 100;
            mpfourwheeler.erase(it4);
            cout<<it4->second<<"'s vehicle ("<<it4->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;
    case 'e':
        it5 = mpsixwheeler.find(str);
        if (it5 != mpsixwheeler.end())
        {
            money -= 200;
            mpsixwheeler.erase(it5);
            cout<<it5->second<<"'s vehicle ("<<it5->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;
    case 'f':
        it6 = mpothers.find(str);
        if (it6 != mpothers.end())
        {
            money -= 400;
            mpothers.erase(it6);
            cout<<it6->second<<"'s vehicle ("<<it6->first<<") has been revoked."<<endl;
        }
        else
        {
            cout << "There is no data related to the vehicle number " << str << endl;
        }
        break;

    default:
        cout << "Invalid input" << endl;
        break;
    }
}

void showMoney(void)
{
    cout << "Your wallet has " << money << " rupees" << endl;
}

int main()
{
    cout << "*****************WELCOME TO PARKING AREA********************" << endl
         << endl;
    while (true)
    {
        cout << "Here is your options:-" << endl;
        showOptions();
        cout << endl
             << "Choose anyone of these options:-" << endl;
        int input;
        cin >> input;
        switch (input)
        {
        case 1:
            enrollVehicle();
            break;
        case 2:
            deleteVehicle();
            break;
        case 3:
            showdetails();
            break;
        case 4:
            showMoney();
            break;
        case 5:
            showQuery();
            cout << "What is your Query?" << endl;
            queryAnswer();
            break;
        case 6:
            cout << "********Thank you for using this platform********" << endl;
            cout<<"Good Bye!!";
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}
