//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    cout << "-------------Auto Trading V0.01____________" << endl;
    cout << "1. Start our Auto-Trading program" << endl;
    cout << "2. Run Back Testing" << endl;
    cout << "3. Run Web Scraper program" << endl;
    cout << "4. Search off-line Database" << endl;
    cout << "5. Quit this program " << endl;
    cout << "-------------Auto Trading V0.01____________" << endl;

    cout << "Please enter your selection (1-5): " << flush;

    int value;
    cin >> value;

    if (value == 1) {
        cout << "Auto-Trading program Started!" << endl;
    } else if (value == 2) {
        cout << "Back Testing Started !" << endl;
    } else if (value == 3) {
        cout << "Web Scraper Started !" << endl;
    } else if (value == 4) {
        cout << "Searching off-line Database......" << endl;
    } else if (value == 5) {
        cout << "Program quited" << endl;
    } else {
        cout << "Invalid Option, You should only input 1-5 . Sorry~" << endl;
    }


    return 0;
}
