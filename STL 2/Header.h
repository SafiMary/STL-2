#pragma once
#include <iostream>

template <typename T>
class Race {
	void race( T& lhs, T& rhs) {
		if (rhs.getSpeed() > lhs.getSpeed()) {
			std::cout << rhs.getName() << " has won!!\n";
		}
		else if (rhs.getSpeed() == lhs.getSpeed()) {
			std::cout << rhs.getName() << " and " <<
				lhs.getName() << " went draw!!\n";
		}
		else {
			std::cout << lhs.getName() << " has won!!\n";
		}
	}
};

class Car {
public:
	Car(int speed, std::string& name) :
		_speed(speed), _name(name) {}
	int getSpeed() {
		return _speed;
	}
	const std::string& getName() {
		return _name;
	}
private:
	int _speed;
	std::string _name;
};

class Motorcycle {
public:
	Motorcycle(int speed, std::string& name) :
		_speed(speed), _name(name) {}
	int getSpeed() {
		return _speed;
	}
	const std::string& getName() {
		return _name;
	}
private:
	int _speed;
	std::string _name;
};