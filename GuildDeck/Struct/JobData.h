//Copyright ? 2015 (�L�@�) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "../System/EnumType.h"

namespace GD
{
	using namespace SDX;
	class JobData
	{
		JobType ���;
		AttackType �U������;
		std::string ���O;
		std::string ������;
		int ��b�̗�;
		int ��b�U����;


	};


	EnumArray<JobData, JobType> JobDataS;

	bool LoadJobS()
	{
		return false;
	}

}