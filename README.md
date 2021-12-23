# vector-2
## Visual Studio 2019
VisualStudioVersion = 16.0.29519.181
## Задача 1
Функция поиска наибольшего элемента в массиве вектора
### Код
```
#include <iostream>
#include <vector>
#include <algorithm>

void fill(std::vector<int>& v)//чет тут компилятор ругается на <>. убрал using namespace std// перестал ругаться
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i;
    }
    random_shuffle(v.begin(), v.end());//перемешиваем элементы вектора
}

void print(const std::vector<int>& v)
{   
    int j;
    std::vector<int>::const_iterator largest = std::max_element(v.begin(), v.end());//в вектор втроена функция поиска макс элемента
    std::cout << "Вывод массива перемешенного вектора \n";
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    j= largest-v.begin();
    std::cout << "Наибольший элемент вектора= "<<v[j];
}
int main()
{   
    setlocale(LC_ALL, "Rus");
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    fill(v);
    print(v);
    return(0);
}
```
