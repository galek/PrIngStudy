//������� �������� ����������(������� ���-����� ��������.)������������� ����������� �������� �������.
//����� ����� � ������

//�������� �������
//������� �������
//�����
#include "NGFramework.h"
#include "Adress.h"
#include "DB.h"



int main(){
	DB db;
	db.AddToList("Nick", "Galko", 75);
	db.AddToList("Andrey", "Galko", 75);
	db.AddToList("Tatyna", "Galko", 75);

	db.GetFromList("Nick", "Galko");

	//system("pause");
	printf("DeleteFromList\n");
	db.DeleteFromList("Tatyna", "Galko", 75);
	//system("pause");
	
	printf("Test new list \n");
	//system("pause");
	db.GetFromList("Tatyna", "Galko");
	printf("Test new list2 \n");
	db.GetFromList("Nick", "Galko");

	system("pause");
	return 0;
}