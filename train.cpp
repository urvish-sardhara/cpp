#include <iostream>
using namespace std;

class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

public:
    void setTrainInfo(int number, const string& name, const string& src, const string& dest, const string& time) {
        trainNumber = number;
        trainName = name;
        source = src;
        destination = dest;
        trainTime = time;
    }

    void displayInfo() {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
        cout << "---------------------------" << endl;
    }

    int getTrainNumber() {
        return trainNumber;
    }
};

int main() {
    const int MAX_TRAINS = 3;
    Train trains[MAX_TRAINS];

    for (int i = 0; i < MAX_TRAINS; i++) {
        cout << "Enter details for Train " << i + 1 << ":" << endl;
        int number;
        string name, source, destination, time;

        cout << "Train Number: ";
        cin >> number;
        cout << "Train Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Source: ";
        getline(cin, source);
        cout << "Destination: ";
        getline(cin, destination);
        cout << "Train Time: ";
        getline(cin, time);

        trains[i].setTrainInfo(number, name, source, destination, time);
        cout << endl;
    }

    cout << "Train Records:" << endl;
    for (int i = 0; i < MAX_TRAINS; i++) {
        trains[i].displayInfo();
    }

    int searchNumber;
    cout << "Enter Train Number to search: ";
    cin >> searchNumber;

    bool found = false;
    for (int i = 0; i < MAX_TRAINS; i++) {
        if (trains[i].getTrainNumber() == searchNumber) {
            cout << "Train Found!" << endl;
            trains[i].displayInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Train with Train Number " << searchNumber << " not found." << endl;
    }

    return 0;
}

