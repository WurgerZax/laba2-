#include <iostream>
#include <string>

using namespace std;
//Рейс: марка автомобиля, номер, пункт назначения, грузоподьемность(в тоннах), стоимость единицы груза, общая стоимость груза.

struct Race 
{
    string mark;
    string number;
    string destination;
    int tone; // типа грузоподьемность
    float priceone;
    float priceall;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 2;
    Race car[N];
   
    for (int i = 0; i < N; i++)
    {
        cout << "Введите Марку машины" << endl;
        cin >> car[i].mark;
        cout << "\nНомер машины" << endl;
        cin >> car[i].number;
        cout << "\nПункт назначения" << endl;
        cin >> car[i].destination;
        cout << "\nВес в тоннах" << endl;
        cin >> car[i].tone;
        cout << "\nЦена единицы груза" << endl;
        cin >> car[i].priceone;
        cout << "\nОбщая стоимость груза" << endl;
        cin >> car[i].priceall;
    }
    /*Проходимся по всему массиву, запоминаем напибольший параметр priceall*/
    float priceMax = 0;
    int n = 0;
    for (int i = 0; i < N; i++)
    {
        if (car[i].priceall > priceMax)
        {
            priceMax = car[i].priceall;
            n = i;
        }
    }
    /*После прохождения по всему массиву выводим инфу о машине, груз которой максимален*/
    cout << "Машина "<<car[n].mark<<"с номером "<<car[n].number<<"По общей цене: "<<car[n].priceall;    
}
