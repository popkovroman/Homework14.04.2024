#include <iostream>
class Car
{
	public:
		int speed;
		void upspeed(int speed, int fuel)
		{
			int i = 0;
			int expenditure = 7;
			int increase = 10;
			bool flag = true;
			for (fuel; fuel > 0; fuel = fuel - expenditure){
				i++;
				if (fuel < 0)
					flag = false;
			}
			if (flag) {
				i--;
				fuel = 0;
			}
			for (int j = 0; j<i; j++) {
				speed+= increase;
		}
		std::cout << fuel << " " << speed;

		}
private :
	int fuel;
};
class truck : public Car {
public: int Load_capacity;
};
class motocycle : public Car {
public:
	char View;
};