#include <iostream>
#include<cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
int main() {
    srand(time(nullptr));
    cout << "Task 1" << endl;
    int arr[10];
    for (int & i : arr) {
        cout << "The random number" << endl;
        i = rand() % 21 - 10;
        cout << i << endl;
    }
    cout << "Rezult of some arithmetical actions: " << pow(arr[4], 3) + pow(arr[7], 3) + pow(arr[8], 3) << endl;
    cout << "The end of Task 1" << endl;
    cout << "Task 2" << endl;
    cout << "Enter n (n>10): ";
    int *d_arr = new int[10];
    cout << "enter array" << endl;
    for (int i = 0; i < 10; ++i)
        cin >> d_arr[i];
    for (int i = 0; i < 10; ++i) {
        cout << d_arr[i] << " ";
        if (d_arr[i] % 2 != 0)
            d_arr[i] = d_arr[i] * 2;
    }
    for (int i = 0; i < 10; ++i)
        cout << d_arr[i] << " " << endl;
    cout << "Enter k1 and k2" << endl;
    int k1;
    int k2;
    cin >> k1;
    cin >> k2;
    int sum = k1 + k2;
    do {
        cout << "Rezult " << sum << endl;
        k1++;

    } while (k1 < k2);
    delete[] d_arr;
    cout << "Task 3" << endl;
    cout << "Enter m>5" << endl;
    int m;
    cin >> m;
    vector<int> Vec(m);
    for (int h = 0; h < m; h++) {
       cin >> Vec[h];
    }
    for (int h: Vec)
        cout << h << " ";
  cout << "\n";
    Vec.push_back(3);
    for (int h: Vec)
        cout << h << " ";
    cout << "\n";
    double b = 0;
    for (int h: Vec) {
        b = b + h;
    }
    cout << "The sum of a vector is " << b << std::endl;
    for (int i = 0; i < Vec.size(); ++i) {
        if (Vec[i]<0)
        {
            Vec.erase(Vec.begin() + i);
            break;
        }
    }
    for (int h: Vec) {
        cout << h << " ";
    }
    cout <<endl;
    cout << "Task 4"<<endl;
string s;
cout<<"Enter string"<<endl;
cin.ignore(10,'\n');
getline(cin,s);
cout<<s<<endl;
 cout<<"length is "<<s.length()<<endl;
    for( int i : s) {
        if ((i == 'A') || (i == 'E') || (i == 'e') || (i == 'I') || (i == 'i') || (i == 'O') ||
            (i == 'o') || (i == 'U') || (i == 'u')) {
            i++;
            double part = i / s.length();
            cout << "proporton of letters" << part << endl;
            int l1, l2;
            cout << "l1: " << endl;
            cin >> l1;
            cout << "l2: ";
            cin >> l2;

            cout << s.substr(l1 - 1, l2 - l1 + 1) << endl;
            s = "Can you can a can as a canner can can a can?";
            cout << "Enter your word: ";
            string S2;
            cin.ignore(10, '\n');
            getline(cin, S2);
            s.replace(s.find("can?"), 3, S2);
            s.replace(s.find("Can"), 3, S2);
            S2.push_back(' ');
            for (int i = 0; i < 4; i++) {
                int point;
                point = s.find("can ");
                s.replace(point, 4, S2);
            }
            cout << s << std::endl;
            return 0;
        }
    }
    }