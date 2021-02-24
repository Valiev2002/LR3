 #include <iostream>
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
    int n;
    cout << "Enter n (n>10): ";
    cin>>n;
    int *d_arr = new int[n];
    if (n>=10) {
        for (int i = 0; i < n; ++i)
            cin >> d_arr[i];
        for (int i = 0; i < n; ++i) {
            cout << d_arr[i] << " ";
            if (d_arr[i] % 2 != 0)
                d_arr[i] = d_arr[i] * 2;
        }
        for (int i = 0; i < n; ++i)
            cout << d_arr[i] << " " << endl;
    }
    else {
        cout << "Error" << endl;
    }
    int k1=0;
    std::cout << "Enter k1 " << std::endl;
    std::cin >> k1;
    int k2=0;
    std::cout << "Enter k2 " << std::endl;
    std::cin>> k2;
    int sum = 0;
    for (int i = k1; i <= k2; i++)
    {
        sum += d_arr[i];
    }
    std::cout << "Summary is " << sum << std::endl;
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
    cout << "Enter string" << endl;
    string st;
    cin.ignore(10,'\n');
    getline(cin, st);
    cout << "length is " << st.length() << endl;
    // proportion
   float counter=0.0;
    for (int i = 0; i < st.size(); ++i) {
        if ('a' == st[i] || st[i]== 'A' || st[i]== 'i' || st[i]== 'I' || st[i]== 'o' || st[i]== 'O' || st[i]== 'y' || st[i]== 'Y' || st[i]== 'e' || st[i]=='E')
        {
            counter++;
        }
        cout << "proportion is "<<counter/st.size()<<endl;
    }
    int l1, l2;
    cout<<"Enter l1 and l2"<< endl;
    cin>> l1>> l2;
    cout<< st.substr(l1, l2 - l1 + 1)<<endl;
     std::string s = "Can you can a can as a canner can can a can?";
    s[0] = 'c';
    std::cout<< s<< std::endl;
    std::cout<< "Enter a substitution"<<std::endl;
    std::string str = "can";
    std::string word;
    std::cin>>word;
    int ps = 0;
    while (s.find(str, ps) != std::string::npos)
    {
        int pos = s.find(str, ps);
        if (s[pos + str.size()] == ' ' || s[pos + str.size()] == '?') {
            s.replace(pos, str.size(), word);
        }
        ps = pos + 1;
    }
    std::cout<<s <<std::endl;
    return 0;
}
