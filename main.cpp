#include<iostream>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int main() {

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << endl;
    }
    cout << "Rez is " << pow(arr[4], 3) + pow(arr[7], 3) + pow(arr[8], 3) << endl;
    int n;
    int *arr2 = new int(n);
    if (n <= 10)
        cout << "impossible" << endl;
    else
        cout << "enter array length with n>10" << endl;
    for (int i = 0; i < n; ++i)
        cin >> *arr2;
    for (int i = 0; i < n; ++i) {
        cout << *arr2 << "";
        if (*arr2 != 0) (*arr2 * 2);
        cout << *arr2 << endl;
        cout << "k1=" << endl;
        cout << "k2=" << endl;
        int k1;
        int k2;
        cin >> k1 >> k2;
        int sum = 0;
        for (int i = k1; i <= k2; ++i) sum += *arr2;
        cout << "summa= " << sum << endl;
        delete[] arr2;
        int m;
        int z;
        cout << "enter m" << endl;
        cin >> m;
        vector<int> arr3;
        for (int i = 0; i <= (m - 1); i++) {
            cout << "z=";
            cin >> z;
            arr3.push_back(z);
        }
        for (int i : arr3) {
            cout << i << endl;
        }
        arr3.push_back(3);
        cout << "Rezult =" << endl;
        for (int i : arr3) {
            cout << i << endl;
        }
        for (int i = 0; i < arr3.size(); i++) {
            cout << arr3[i] << " ";
        }
        cout << endl;
        int summ = 0;
        for (int i = 0; i < arr3.size(); i++) {
            summ += (arr3[i]);
        }
        cout << (summ * 1.0 / arr3[arr3.size() - 1]) << endl;

        long w = 0;
        w = arr3.size();
        for (long i = 0; i < arr3.size(); i++) {
            if (arr3[i] >= 0) {
                arr3.erase(arr3.begin() + i);
                i = w;
            }
        }
        for (int i = 0; i < arr3.size(); i++) {
            cout << arr3[i] << " ";
        }
        string strng;
        cout << "strng = " << endl;
        cin.ignore(10, '\n');
        getline(cin, strng);
        cout << strng << endl;
        //2
        int v;
        if (v >= 65 && v <= 90) {
            cout << "Letter" << endl;
        } else if (v >= 97 && v <= 122) {
            cout << "Letter" << endl;
            cout << "the length of line" << strng.size() << endl << "proportion of Letters in the line "
                 << (w * 1.0 / strng.size()) << endl;
            //3
            int l1, l2;
            cout << "l1: " << endl;
            cin >> l1;
            cout << "l2: ";
            cin >> l2;
            cout << strng.substr(l1 - 1, l2 - l1 + 1) << endl;

            cout << endl;
            cout << "enter change" << std::endl;
            string line2 = "Can you can a can as a canner can can a can";
            string line3;
            getline(cin, line3);
            string strc = "can";
            while (line2.find(strc) != string::npos) {
                auto pos = line2.find(strc);
                line2.erase(pos, strc.size());
                line2.insert(pos, line3);
            }
            strc = "Can";
            if ((line3[0] >= 97) && (line3[0] <= 122)) line3[0] -= 32;
            while (line2.find(strc) != string::npos) {
                auto pos = line2.find(strc);
                line2.erase(pos, strc.size());
                line2.insert(pos, line3);
            }


        }
        return 0;
    }
}