#include <iostream>
#include <cassert>
using namespace std;



//реализовать класс Week
// конструктор по умолчанию (задает дни недели)
// конструктор копирования
// перегрузить оператор []
//// получать по индексу день недели
// перегрузить оператор <<
// //

class Week {

private: 
	
	string arr[7];
	

public:

	Week()
	{
		arr[0] = "Понедельник";
		arr[1] = "Вторник";
		arr[2] = "Среда";
		arr[3] = "Четверг";
		arr[4] = "Пятница";
		arr[5] = "Суббота";
		arr[6] = "Воскресенье";
	}


	void print()
	{
		for (int i = 0; i < 7; i++)
		{
			cout << i+1 <<": " <<arr[i] << endl;
		}
	}

	 string& operator[](int index) //благодаря & можно задать индексу новое значение
	{
		assert(index >= 0 and index < 7 and "Индекс за границей массива");
		return arr[index];

	}


	 string& operator()()
	 {
	 
	 }


	 friend ostream& operator<<(ostream& out, ostream& arr);//передаем поток out



};



ostream& operator<<(ostream& out, const Week arr) //передаем поток out, передаем точку
{ 

	for (int i = 0; i < 7; i++)
	{
		out << arr[i];
	}
	return out;
}



int main()
{
	setlocale(LC_ALL, "Ru");

	Week week1;

	week1.print();

	week1[1] = "Это не понедельник";

	cout << week1[2];

}
