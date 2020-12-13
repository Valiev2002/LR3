#include <cmath>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
//task1
    cout << "Task 1" << endl;
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cout << "The random number" << endl;
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << endl;
    }
    cout << "Rezult of some arithmetical actions: " << pow(arr[4], 3) + pow(arr[7], 3) + pow(arr[8], 3) << endl;
    cout << "The end of Task 1" << endl;
    cout << "Task 2" << endl;
    //task2 #1
    cout << "#1" << endl;
    cout << "enter array length(n>10)" << endl;
    int n; // размер массива
    cin >> n; // получение от пользователя размера массива
    int *e_tron = new int[n]; // Выделение памяти для массива
    for (int i = 1; i <= n; i++) {
        cin >> e_tron[i];
    }
    for (int i = 1; i <= n; i++) {
        cout << e_tron[i] << " ";
    }
    for (int i = 1; i <= n; i++) {
        if (e_tron[i] % 2 != 0) {
            e_tron[i] = (e_tron[i] * 2);
            cout << e_tron[i] << endl;

        }
        cout << "#3" << endl;
        int k1, k2;
        int sum;
        cout << "Enter k1 and  k2 : ";
        cin >> k1 >> k2;
        for (int i = k1 - 1; i <= k2 - 1; i++) {
            sum += e_tron[i];
        }
        cout << "Rezult is" << sum << endl;
        delete[] e_tron;
    }
    cout << "The end of Task 2" << endl;
    cout << "Task 3" << endl;
    cout << "#1" << endl;
    int m, x;
    cout << "enter m(m>5): " << endl;
    cin >> m;
    vector<int> arr1;
    for (int i = 1; i <= m; i++) {
        cout << "x  is ";
        cin >> x;
        arr1.push_back(x);
    }
    cout << "#1" << endl;
    for (int i : arr) {
        cout << i << endl;
    }
    arr1.push_back(3);
    cout << "#2" << endl;
    for (int i : arr1) {
        cout << i << endl;
    }
    for (int h:arr1)
        std::cout << h << " ";
    cout << "\n";
    double b = 0;
    for (int h:arr1) {
        b = b + h;
    }
    cout << "The sum of a vector is " << b << std::endl;
    long w ;
    w = arr1.size();
    for (long i = 0; i < arr1.size(); i++) {
        if (arr1[i] >= 0) {
            arr1.erase(arr1.begin() + i);
            i = w;
        }

    cout<<"Task 4"<<endl;
        string S;
        cout << "Enter your text: ";
        cin.ignore(10, '\n');
        getline(std::cin, S);
        cout << S;
        cout << "\n";
        cout << "The length of your text is " << S.length();
        cout << "\n";
        double a = count(S.begin(),S.end(),'3');
        double part = a/S.length();
        std::cout << "There part of meanings of '3' is " << part << std::endl;
        int l1;
        int l2;
        cout << "Enter l1: ";
        cin >> l1;
        cout << "Enter l2: ";
        cin >> l2;
        int l3;
        l3 = l2-l1;
        std::cout << S.substr(l1-1,l3+1) << std::endl;
        S = "Can you can a can as a canner can can a can?";
        cout << "Enter your word: ";
        string S2;
        cin.ignore(10, '\n');
        getline(std::cin, S2);
        S.replace(S.find("can?"),3,S2);
        S.replace(S.find("Can"),3,S2);
        S2.push_back(' ');
        for (int i=0;i<4;i++)
        {
            int point;
            point = S.find("can ");
            S.replace(point,4,S2);
        }
        cout << S << endl;
        return 0;
    }
}