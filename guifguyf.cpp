#include<iostream>
#include<cmath>
#include<vector>
#include<string>
//zad 1
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < 10; ++i)
    {

        arr[i] = rand() % 21 - 10;
        cout << arr[i] << endl;
    }
    cout << pow(arr[5], 3) + pow(arr[8], 3) + pow(arr[9], 3) << endl;


    //zad2
     int n;
    int *arr2 = new int[n];
    if (n <= 10)
        cout << "vvedi drugoy symbol" << endl;
    else
        cout << "vvedi massiv dlinoy n=15" << endl;
    for (int i = 0; i < n; ++i)cin >> arr2[i];
    for (int i = 0; i < n; ++i) {
        cout << arr2[i] << "";
        if(arr2[i]==0) arr2[i]+=9;
    }
    cout<<endl;
    for(int i=0;i<n;++i)cout<<arr2[i]<<"";
    cout<<endl;
    cout<<"vvedi k1 i k2"<<endl;
    int k1,k2;
    int sum = 0;
    for(int i=k1;i<=k2;++i)sum+=arr2[i];
    cout<<"summa ravna"<<sum<<endl;
    delete[] arr;
    //zad3
    int m;
    int a;
    cout << "vvedi dlinu massiva" << std::endl;
    cin >> m;
    vector<int> vec1;
    for (int i = 0; i < m; ++i) {
        std::cin >> a;
        vec1.insert(vec1.end(), a);
    }
    for (int i = 0; i < m; ++i) cout << vec1[i] << " ";
    cout << endl;
    vec1.insert(vec1.end(), 3);
    for (int i = 0; i < vec1.size(); ++i) cout << vec1[i] << " ";
    cout << endl;
    sum = 0;
    for (int i = 0; i < vec1.size(); ++i) sum += vec1[i];
    cout << "summa vectora ravna " << sum << endl;
    int nomer = -1;
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i]< 0) {
            nomer = i;
            break;}







        }
//zad4
string gtr1;
   cin.ignore(10, '\n');
    getline(cin, gtr);
   cout << gtr << endl;
cout<<gtr.size();

    int kolvoi = 0;

    for(int i=0;i < gtr.size(); ++i) 
{
    if (gtr[i] == 'a')
kolvoi ++;
     if(gtr[i]== 'e')
kolvoi ++;
    if(gtr[i]=='i')   
kolvoi ++;
    if   (gtr[i]=='o')
kolvoi ++;
        if   (gtr[i]=='y')
kolvoi ++;
    if   (gtr[i]=='u')
kolvoi ++;
}
 cout << "dlina stroki ravna " << gtr.size() << ", dolya glasnih bukv ravna " << kolvoi* 1.0 / gtr.size() <<endl;
    cout << "vvedi l1 i l2" << endl;
    int l1, l2;
    cin >> l1 >> l2;
  cout << gtr.substr(l1, l2) << endl;
   string gtr2 = "Can you can a can as a canner can can a can";
  string gtr3;
    cin.ignore(10, '\n');
    getline(cin, gtr3);
    
}




