#pragma once

using namespace System;		
using namespace DataAccess;


namespace Domain {
	public ref class UserModel
	{
	public:
		UserDao^ userDao = gcnew UserDao();
		bool LoginUser(String^, String^);
	

	};
}
