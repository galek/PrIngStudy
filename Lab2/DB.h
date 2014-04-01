#pragma once


class DB{
public:
	DB(){
		Init();	
	}
	~DB();
	void Init();
	void AddToList(const char* mFirstName, const char*mLastName, int Kvar);
	void DeleteFromList(const char* mFirstName, const char*mLastName, int Kvar);
	Adress* GetFromList(const char* mFirstName, const char*mLastName);
	void WriteContains();
	Vega::VList<Adress> list;
	Vega::VList<Adress>* newList;
};