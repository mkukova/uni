#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include <chrono>
#include <thread>

#include<Windows.h>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

void One()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "1" << endl;
	}
}

void Two()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "2";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << setw(10) << "2" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "2";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "2" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "2";
	}
	cout << endl;
}

void Three()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "3";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << setw(10) << "3" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "3";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << setw(10) << "3" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "3";
	}
	cout << endl;
}

void Four()
{
	cout << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "4" << setw(9) << "4" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "4";
	}
	cout << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << setw(10) << "4" << endl;
	}
}

void Five()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "5";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "5" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "5";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << setw(10) << "5" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "5";
	}
	cout << endl;
}

void Six()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "6";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "6" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "6";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "6" << setw(9) << "6" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "6";
	}
	cout << endl;
}

void Seven()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "7";
	}
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << setw(10) << "7" << endl;
	}
	cout << endl;
}

void Eight()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "8";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "8" << setw(9) << "8" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "8";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "8" << setw(9) << "8" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "8";
	}
	cout << endl;
}

void Nine()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "9";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << "9" << setw(9) << "9" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "9";
	}
	cout << endl;
	for (size_t i = 0; i < 4; i++)
	{
		cout << setw(10) << "9" << endl;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << "9";
	}
	cout << endl;
}

void Zero()
{
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "0";
	}
	cout << endl;
	for (size_t i = 0; i < 9; i++)
	{
		cout << "0" << setw(9) << "0" << endl;
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << "0";
	}
	cout << endl;
}

void Row(int x)
{
	for (int i = 0; i < 10; i++)
	{
		cout << x;
	}
	cout << "   ";
}

void Draw(int min, int sec)
{
	int digit[5] = { 0,0,0,0,0 };
	int i = 2;
	while (min > 0)
	{
		digit[i] = min % 10;
		min /= 10;
		i--;
	}

	digit[4] = sec % 10;
	sec /= 10;
	digit[3] = sec % 10;

	//First Layer
	for (int i = 0; i < 5; i++)
	{
		Row(digit[i]);
	}

	//Second Layer

}

int main()
{
	//One();
	//Two();
	//Three();
	//Four();
	//Five();
	//Six();
	//Seven();
	//Eight();
	//Nine();
	//Zero();

	int number = -1;

	while (number < 0 || number >9999)
	{
		cout << "Enter seconds: ";
		cin >> number;
	}

	int min, sek;

	if (number >= 60)
	{
		min = number / 60;
		sek = number % 60;
	}
	else
	{
		min = 0;
		sek = number;
	}

	do
	{
		system("CLS");
		Draw(min, sek);
		//cout << min << ":" << sek;
		sek--;
		if (sek == 0 && min > 0)
		{
			min--;
			sek = 59;
		}
		sleep_for(nanoseconds(10));
		sleep_until(system_clock::now() + seconds(1));
	} while (sek != -1 || min != 0);

	Beep(500, 1000);
	system("CLS");
	cout << "Time's up!";
	return 0;
}



