#include "NGFramework.h"
#include "Adress.h"
#include "DB.h"


void DB::Init() {
	list.Clear();
}

void DB::AddToList(const char* mFirstName, const char*mLastName, int Kvar){
	printf("AddToList %s %s %i \n", mFirstName, mLastName, Kvar);
	list.AddElement(&Adress(mFirstName, mLastName, Kvar));
}
void DB::DeleteFromList(const char* mFirstName, const char*mLastName, int Kvar){
	printf("DeleteFromList %s %s %i \n", mFirstName, mLastName, Kvar);
	Vega::VList<Adress> newList;
	newList.Clear();
	Adress*DA = GetFromList(mFirstName, mLastName);

	int size = list.GetSize();
	for (int i = 0; i < size; i++)
	{
		Adress *a = &list.entries[i];
		if (a->mFirstName != DA->mFirstName)
			newList.AddElement(a);
	}
	/*list.Clear();
	list.Resize(size-1);*/
	list.Erase();


	for (int i = 0; i <list.GetSize(); i++){
		delete &list.entries[i];
	}
	list = newList;

	for (int i = 0; i <newList.GetSize(); i++)
	{
		Adress *a = &newList.entries[i];
		printf("{Contain} Found %s \n", a->mFirstName.c_str());
	}
}


Adress* DB::GetFromList(const char* mFirstName, const char*mLastName){

	for (int i = 0; list.GetSize(); i++)
	{
		Adress *a = &list.entries[i];
		if (a->mFirstName == mFirstName){
			printf("{GetFromList} Found %s \n", a->mFirstName.c_str());
			return a;
		}
	}
	return NULL;
}