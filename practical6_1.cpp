#include <iostream>
#include <string>
#include <iomanip> // for setw
using namespace std;

int main() {
    int n;
    cout << "************" << endl;
    cout << " SPORTS EVENT SCORE ANALYSIS " << endl;
    cout << "************" << endl;

    cout << "Enter Number of Participants: ";
    cin >> n;

    // Declare 1D arrays
    string id[100];
    string name[100];
    int score[100];

    // Input data
    for(int i = 0; i < n; i++) {
        cout << "Enter Participant ID: ";
        cin >> id[i];
        cout << "Enter Participant Name: ";
        cin >> name[i];
        cout << "Enter Score: ";
        cin >> score[i];
        cout << endl;
    }


    int total = 0;
    int highest = score[0];
    int lowest = score[0];

    for(int i = 0; i < n; i++) {
        total += score[i];
        if(score[i] > highest)
            highest = score[i];
        if(score[i] < lowest)
            lowest = score[i];
    }

    double average = (double)total / n;


    cout << "------------------------------------" << endl;
    cout << " Participant Performance " << endl;
    cout << "------------------------------------" << endl;
    cout << left << setw(8) << "ID" << setw(10) << "Name" << "Score" << endl;
    cout << "------------------------------------" << endl;

    for(int i = 0; i < n; i++) {
        cout << left << setw(8) << id[i] << setw(10) << name[i] << score[i] << endl;
    }

    cout << "------------------------------------" << endl;
    cout << endl;


    cout << "Total Score: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;

    return 0;
}
