#include "NGFramework.h"
#include "Adress.h"
#include "DB.h"


void DB::Init() {
	list.Clear();
	newList = nullptr;
}

void DB::AddToList(const char* mFirstName, const char*mLastName, const char*mAdress/*int Kvar*/){
	//printf("AddToList %s %s %i \n", mFirstName, mLastName, Kvar);
	printf("AddToList %s %s %s \n", mFirstName, mLastName, mAdress);
	list.AddElement(&Adress(mFirstName, mLastName, mAdress/*Kvar*/));
}
void DB::DeleteFromList(const char* mFirstName, const char*mLastName, const char*mAdress/*, int Kvar*/){
	//printf("DeleteFromList %s %s %i \n", mFirstName, mLastName, Kvar);
	printf("DeleteFromList %s %s %s \n", mFirstName, mLastName, mAdress);
	//Некузяво так,но пойдет
	if (newList)
		newList->Clear();
	newList = new Vega::VList<Adress>();

	int size = list.GetSize();
	for (int i = 0; i < size - 1; i++)
	{
		Adress *a = &list.entries[i];
		if ((a->mFirstName != mFirstName) || (a->mLastName != mLastName))
			newList->AddElement(a);
	}
	list.Erase();
	list = *newList;
}


Adress* DB::GetFromList(const char* mFirstName, const char*mLastName){

	for (int i = 0; i < list.GetSize(); i++)
	{
		Adress *a = &list.entries[i];
		if ((a->mFirstName == mFirstName) && (a->mLastName == mLastName))
		{
			printf("{GetFromList} Found %s \n", a->mFirstName.c_str());
			return a;
		}
	}
	printf("Not Found %s \n", mFirstName);
	return NULL;
}

void DB::WriteContains()
{
	for (int i = 0; i < list.GetSize(); i++)
	{
		Adress *a = &list.entries[i];
		printf("{Contain} Found %s \n", a->mFirstName.c_str());
	}
}

DB::~DB()
{
	if (&list)
		list.Erase();
	//Forgot about delete newlist-else crash in VList destructor
}