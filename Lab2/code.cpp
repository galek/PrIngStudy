//Создать адресной справочник(фамилия имя-номер квартиры.)Предусмотреть возможность изменеия адресов.
//Нужен поиск в строке

//Добавить элемент
//Удалить элемент
//Поиск
#include "NGFramework.h"
#include "Adress.h"
#include "DB.h"



int main(){
	DB db;
	db.AddToList("Nick", "Galko", 75);
	db.AddToList("Andrey", "Galko", 75);
	db.AddToList("Tatyna", "Galko", 75);

	db.GetFromList("Nick", "Galko");

	printf("DeleteFromList\n");
	db.DeleteFromList("Tatyna", "Galko", 75);
	db.WriteContains();
	printf("Test old list \n");
	db.GetFromList("Nick", "Galko");
	printf("Test new list \n");
	system("pause");
	db.GetFromList("Tatyna", "Galko");

	system("pause");
	return 0;
}