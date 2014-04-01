#include "NGFramework.h"
#include "Adress.h"
#include "DB.h"


void DB::Init() {
	list.Clear();
	newList.Clear();
}

void DB::AddToList(const char* mFirstName, const char*mLastName, int Kvar){
	printf("AddToList %s %s %i \n", mFirstName, mLastName, Kvar);
	list.AddElement(&Adress(mFirstName, mLastName, Kvar));
}
void DB::DeleteFromList(const char* mFirstName, const char*mLastName, int Kvar){
	printf("DeleteFromList %s %s %i \n", mFirstName, mLastName, Kvar);
	newList.Clear();
	Adress*DA = GetFromList(mFirstName, mLastName);

	int size = list.GetSize();
	for (int i = 0; i < size - 1; i++)
	{
		Adress *a = &list.entries[i];
		if (a->mFirstName != DA->mFirstName)
			newList.AddElement(a);
	}
	/*list.Clear();
	list.Resize(size-1);*/
	list.Erase();


	/*for (int i = 0; i <list.GetSize(); i++){
		Adress*a = &list.entries[i];
		delete a;
		a = NULL;
		}*/
	list = newList;


}


Adress* DB::GetFromList(const char* mFirstName, const char*mLastName){

	for (int i = 0; i < list.GetSize(); i++)
	{
		Adress *a = &list.entries[i];
		if (a->mFirstName == mFirstName) 
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
	list.Erase();
	newList.Erase();
}