#include "pch.h"

#include "Domain.h"

bool Domain::UserModel::LoginUser(String^ user, String^ password)
{
	return this->userDao->Login(user, password);
}
