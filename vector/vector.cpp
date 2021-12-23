#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fill(std::vector<int>& v)//чет тут компилятор ругается на <>. (проблемка с пространством имён?)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i;
    }
    random_shuffle(v.begin(), v.end());//перемешиваем элементы вектора
}

void print(const vector<int>& v)
{   
    int j;
    vector<int>::const_iterator largest = max_element(v.begin(), v.end());//в вектор втроена функция поиска макс элемента
    cout << "Вывод массива перемешенного вектора \n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    j= largest-v.begin();
    cout << "Наибольший элемент вектора= "<<v[j];
}
int main()
{   
    setlocale(LC_ALL, "Rus");
    int n;
    cin >> n;
    vector<int> v(n);
    fill(v);
    print(v);
    return(0);
}
