#include "PRICE.hpp"
#include <cstdlib>

const unsigned length = 8;
//сортировка по имени
int comparator(const void *f, const void *l){
	return ((PRICE*)f)->_name() > ((PRICE*)l)->_name();
}

//считываем данные
void scan(PRICE *p){
   for(unsigned i = 0; i < length; ++i){
		try{
			cout << "Имя Магазин Стоимость\n";
			cin >> p[i];
		}
		catch(const EXCEPTION& exc){
		 cout << exc.what();
		 --i;
		}
   }
   qsort(p, length, sizeof(PRICE), comparator);
}

//поиск
void find(PRICE *p){
	cout << "Название товара\n";
	string name;
	cin >> name;
	int i;
	bool flag = true;
	for(i = 0; i < length; ++i){
		if(p[i]._name() == name){ 
			cout << p[i] << '\n';
			flag = false;
		}
	}
	if(flag) cout << "Отсутствует";
	
}
int main(){
	setlocale(LC_ALL, "");
	PRICE p[length];
	int a;
	for(;;){
		cout << "\n1. Считать\n2. Найти\n3. Выход\n";
		cin >> a;
		if(a == 1){
			scan(p);
		}
		else if(a == 2){
			find(p);
		}
		else{
			return 0;
		}
	}
	return 0;
}