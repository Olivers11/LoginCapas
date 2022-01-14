#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;




namespace DataAccess {
	public ref class ConnectionToSql
	{
	public:
		static String^ connectionString;
		ConnectionToSql();
		MySqlConnection^ GetConnection();


	};
	public ref class UserDao:ConnectionToSql {
	public:
		bool Login(String^, String^);
	};
}
