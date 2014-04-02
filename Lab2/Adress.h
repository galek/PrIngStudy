#pragma once


struct Adress
{
	Adress(const char* _mFirstName, const char*_mLastName, const char*_mAdress):
	mFirstName(_mFirstName), mLastName(_mLastName), mAdress(_mAdress)
	{}
	std::string mFirstName, mLastName, mAdress;

#if 0
	Adress(const char* _mFirstName, const char*_mLastName, int _mKvar):
	mFirstName(_mFirstName), mLastName(_mLastName), mKvar(_mKvar)
	{}
	std::string mFirstName,mLastName;
	int mKvar;
#endif
};