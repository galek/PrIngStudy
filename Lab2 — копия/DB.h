#pragma once


class DB{
public:
	void Init();
	void AddToList(const char* mFirstName, const char*mLastName, int Kvar);
	void DeleteFromList(const char* mFirstName, const char*mLastName, int Kvar);
	Adress* GetFromList(const char* mFirstName, const char*mLastName);
	Vega::VList<Adress> list;
};