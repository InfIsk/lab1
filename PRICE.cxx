#include "PRICE.hpp"

PRICE::PRICE(){//конструктор
	cout << "\nКонструктор\n";
}
PRICE::PRICE(const PRICE& value){//конструктор копирвоания
	cout << "\nКоснтрукторк\n";
}
PRICE::~PRICE(){//деструктор
	cout << "\nДеструктор\n";
}
string& PRICE::_name(){
	return name;
}

string& PRICE::_store(){
	return store;
}

int& PRICE::_cost(){
	return cost;
}



istream& operator >>(istream& in, PRICE& p){
	if(!(in >> p.name >> p.store >> p.cost))	throw EXCEPTION("Ошибка ввода");
	return in;
}
ostream& operator <<(ostream& out, const PRICE& p){
	out << p.name << ' ' << p.store << ' ' << p.cost;
	return out;
}