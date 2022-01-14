#include "pch.h"
#include "DataAccess.h"

DataAccess::ConnectionToSql::ConnectionToSql()
{
	this->connectionString = "datasource=localhost; username=root; password=""; database=prueba;";
}

MySqlConnection^ DataAccess::ConnectionToSql::GetConnection()
{
	return gcnew MySqlConnection(this->connectionString);
}

bool DataAccess::UserDao::Login(String^ user, String^ password)
{
	MySqlConnection^ connection = GetConnection();
	connection->Open();
	MySqlCommand^ cusor = gcnew MySqlCommand();
	cusor->Connection = connection;
	cusor->CommandText = "select * from login where Usuario='" + user + "' and Contra='" + password + "'";
	MySqlDataReader^ reader = cusor->ExecuteReader();
	if (reader->HasRows) {
		return true;
	}

	return false;
}
