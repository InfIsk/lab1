#include "PRICE.hpp"

PRICE::PRICE(){//�����������
	cout << "\n�����������\n";
}
PRICE::PRICE(const PRICE& value){//����������� �����������
	cout << "\n������������\n";
}
PRICE::~PRICE(){//����������
	cout << "\n����������\n";
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
	if(!(in >> p.name >> p.store >> p.cost))	throw EXCEPTION("������ �����");
	return in;
}
ostream& operator <<(ostream& out, const PRICE& p){
	out << p.name << ' ' << p.store << ' ' << p.cost;
	return out;
}