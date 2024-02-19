#include <iostream>
#include <string>

using namespace std;

class LocalPhone {
protected:
    string phoneNumber;

public:
    // Member functions to input and display phone number
    void inputPhoneNumber() {
        cout << "Enter Local Phone Number: ";
        cin >> phoneNumber;
    }

    void displayPhoneNumber() {
        cout << "Local Phone Number: " << phoneNumber << endl;
    }
};

class NatPhone : public LocalPhone {
protected:
    string cityCode;

public:
    // Member functions to input and display city code
    void inputCityCode() {
        cout << "Enter City Code: ";
        cin >> cityCode;
    }

    void displayCityCode() {
        cout << "City Code: " << cityCode << endl;
    }
};

class IntPhone : public NatPhone {
private:
    string countryCode;

public:
    // Member functions to input and display country code
    void inputCountryCode() {
        cout << "Enter Country Code: ";
        cin >> countryCode;
    }

    void displayCountryCode() {
        cout << "Country Code: " << countryCode << endl;
    }
};

int main() {
    IntPhone phone;
    phone.inputPhoneNumber();
    phone.inputCityCode();
    phone.inputCountryCode();

    cout << "\nPhone Details:" << endl;
    phone.displayPhoneNumber();
    phone.displayCityCode();
    phone.displayCountryCode();

    return 0;
}
