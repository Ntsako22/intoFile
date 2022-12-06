// intoFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include <string>
using namespace std;


void getDate(int& day, int& month, int& year, char& key) {

    bool change_date = true;
    while (change_date) {

        cout << "\nEnter the Day: "; cin >> day;
        cout << "\nEnter the Month: "; cin >> month;
        cout << "\nEnter the Year : "; cin >> year;

        cout << "\nDate Entererd : " << day << "." << month << "." << year;
        cout << "\nWould you like to change the date?(Y/N)";
        cin >> key;
        if (key == 'Y') {

            change_date = true;

        }
        else if (key == 'N')
        {
            cout << "\nDate is saved"<<endl;
            change_date = false;
        }
    }
    return;
}
    void write_to_text(int day, int month, int year) {

        ofstream Data;
        Data.open("practice.txt", ios::app);
        Data << day << endl;
        Data << month << endl;
        Data << year << endl;
        Data.close();
    }
    void readfromfile() {


        fstream Data;
        Data.open("practice.txt", ios::in);
        if (Data.is_open()) {

            string line;
            while (getline(Data, line)) {

                cout << line << '\n';
            }


        }
        Data.close();

    }
    
    int main()
    {
        char key{};
        int day{}, month{}, year{};
        getDate(day, month, year, key );
        write_to_text(day, month, year);
        readfromfile();
        return 0;
        system("pause > 0");



    }
    
    
    
    
    
    
    
    
    
    
    
    






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
