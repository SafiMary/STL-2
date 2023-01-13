#include <iostream>
#include <windows.h>
#include <vector>
#include <list>
#include <forward_list>
#include <map>
#include <utility> //std::pair
#include <unordered_map> //несортированная(неупорядоченная) мапа
#include "Header.h"

template <typename T>
struct Node {
	T val;// значение узла (какую информацию он хранит)
	Node<T> *prev; //предыдущий сосед
	Node<T> *next; //следующий сосед
};
template <typename T>
struct Node_of_forward_list {  //нет инфо о предыдущем соседе, в отличие от list
	T val;// значение узла (какую информацию он хранит)
	Node_of_forward_list<T> *next; //следующий сосед  
};
template<typename T>
class Calculator {
public:
	Calculator (T num1, T num2):
		_num1(num1), _num2(num2){}
	T getSum() {
		return (num1 + num2);
	}
	T getSub() {
		return (num1 - num2);
	}
	T getDiv() {
		return (num2 / num2);
	}
	T getMulty() {
		return (num2 * num2);
	}

private:
	T _num1;
	T _num2;
};


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Race<int> r;
	/*Race <Car> myRace;
	Car c1(50, "FGD");
	Car c2(60, "Fhy");
	myRace race(c1, c2);*/
	Calculator a (5, 6);
	a.getSum();


	//std::cout << "Hello world!\n";
	//std::vector<int> vec{ 1,2,3 };
	////range based for loop
	//for (const auto& el : vec) {

	//}
	//for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++) {

	//}
	////быстрее в случае, если бежим от начала к концу вектора
	//// [][][]
	//for (int i = 0; i < vec.size(); i++) {
	//	int x = vec[i];
	//}
	


	//двусвязный список, состоит из узлов (Node) 
	//каждый узел знает про своего предыдущего и последующего соседа
	//содержит указатель на соседа, поэтому знает
	//сложность О(1)

	//std::list<int> mylist;
	//mylist.push_back(1);
	//mylist.push_back(2);
	//mylist.push_back(3);

	//for (const auto& el : mylist) {
	//	std::cout << el << " ";
	//}
	//std::cout << '\n';

	//mylist.push_front(0);
	//mylist.push_front(-1);
	//mylist.push_front(-2);

	//for (const auto& el : mylist) {
	//	std::cout << el << " ";
	//}

	//Node<int> *n = new Node<int>();
	//Node<int>* n2 = new Node<int>();
	//std::vector<int> vec2;
	//vec2.push_back(n->val);
	//while (n->next != nullptr) {  //если у следующего значение не равен nullptr
	//	vec2.push_back(n->next->val);
	//	n = n->next;
	//}

	//forward односвязный список и занимает меньше места
	//std::forward_list<int> fwl;
	//fwl.push_front(1); //можно пушить только front
	//fwl.push_front(2);
	//fwl.push_front(3);
	//auto i = 5;  //авто сам определяет тип
	//for (const auto& el : fwl) {  //функция чтобы пробежаться по всем элементам до конца
	//	std::cout << el << " ";
	//}
	//std::cout << std::endl;
	//std::map<int, std::string> mymap;
	////три способа вложить в мап пару
	//mymap[2] = "abc"; //по ключу 2 запишем abc
	//mymap.insert({ 5, "Bob" }); //по ключу 5 запишем Bob
	//mymap.insert(std::make_pair(6, "Bobs")); 


	//std::pair<int, std::string> mypair;
	//mypair.first = 4;
	//mypair.second = "Tanya";

	//mymap.insert(mypair);
	////[key, value]
	//for (const auto& el : mymap) {
	//	std::cout << el.first << " " << el.second << "\n";
	//}
	//using umap = std::unordered_map<int, std::string>;
	//umap um;
	std::unordered_map<int, std::string> umap;

	umap.insert({ 1, "hello" });
	umap.insert({ 2, "how are you" });
	umap.insert({ 3, "ok" });
	//insert -> hash(key) -> hashed_key  
	for (const auto& el : umap) {
	std::cout << el.first << " " << el.second << "\n";
	}
	//когда пытаемся вставить значение в один ключ, можно проверить
	std::map<int, std::string> mymap2;
	mymap2.insert({ 8, "aser" });
	const auto & [it, isInserted] = mymap2.insert({ 9, "daser" });// если ключ свободен вставить значение, если нет
	std::cout << "isInserted:" << isInserted << std::endl; //вернуть что нет, возвращает ноль(если нет)


}