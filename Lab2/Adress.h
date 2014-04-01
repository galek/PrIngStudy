#pragma once


struct Adress
{
	Adress(const char* _mFirstName, const char*_mLastName, int _mKvar)
		:mFirstName(_mFirstName), mLastName(_mLastName), mKvar(_mKvar)
	{}
	std::string mFirstName,mLastName;
	int mKvar;
};