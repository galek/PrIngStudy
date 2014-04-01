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
	Adress*a = GetFromList(mFirstName, mLastName);

	//for (int i = 0; i < list.GetSize(); i++)
	//	if (i + 1<list.GetSize())
	//	list.entries[i] = list.entries[i + 1];

	list.numEntries = 1;
	list.listSize = 1;

	if (list.entries)
		free(list.entries[2]);
	list.entries = NULL;

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