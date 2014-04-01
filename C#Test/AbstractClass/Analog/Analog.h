// Analog.h

#pragma once
#include <vcclr.h>
#include <msclr\marshal.h>
#include <string>
#include "windows.h"
using namespace System;

namespace Analog {
	static System::String^ toMS(const std::string a)
	{
		return gcnew System::String(a.c_str());
	}

	std::string toNative(String^a)
	{
		return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a);
	}

	class Native
	{
	public:
		void SetString(std::string a)
		{
			nstring = a;
		}

		std::string nstring;
	};

	public ref class Class1
	{
		// TODO: здесь следует добавить свои методы для этого класса.

	public:
		Class1()
		{
			n = new Native();
		}
		void GetNative()
		{
			MessageBoxA(0, n->nstring.c_str(), "Native", 0);
			system("pause");
		}
		void GetManaged()
		{
			ManagedToNative(type);
			MessageBoxA(0, n->nstring.c_str(), "Managed", 0);
			system("pause");
		}

		void ManagedToNative(String^ a)
		{
			n->SetString(toNative(a));
		}
		void NativeToManagedConv()
		{
			type = toMS(n->nstring);
		}
		String ^type;
	    public:	Native*n;
	};
}
