//Copyright ? 2015 (L¥@¥) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "../System/EnumType.h"

namespace GD
{
	using namespace SDX;

	class EnemyData
	{
	public:
		EnemyType í°;
		std::string ¼O;
		std::string à¾¶;

		
		int UÍ;
	};

	EnumArray<EnemyData, EnemyType> EnemyDataS;

	bool LoadEnemyS()
	{
		File file("file/data/unit_data.dat", FileMode::Read, true);
		auto strS = file.GetCsvToString2();
		int count = 0;

		//CSVt@C©çÇÝÞ
		for (auto &it : EnemyDataS)
		{
			it.í° = EnemyType(count);
			it.¼O = strS[count][0];
			//it.à¾¶ = strS[];

			/*
			it.Eí = UnitType(count);
			if (it.Eí <= UnitType::~) { it.isEBb` = true; }

			UnitFile.Read(it.¼O);
			UnitFile.Read(it.à¾¶);

			UnitFile.Read(it.®«);
			UnitFile.Read(it.Ëöí);

			int param;
			UnitFile.Read(param);
			if (param == 1) { it.isÎó = false; }
			if (param == 2) { it.isÎn = false; }
			if (param == 3) { it.isg¢ÌÄ = true; }

			UnitFile.Read(it.îb­»ñ);
			UnitFile.Read(it.fotí);
			UnitFile.Read(it.ÁUí°);

			UnitFile.Read(it.RXg, 6);
			UnitFile.Read(it.UÍ, 6);
			UnitFile.Read(it.Ëö, 6);
			UnitFile.Read(it.AË, 6);
			UnitFile.Read<int>(it.e¬, 6, 100);

			UnitFile.Read<int>(it.xøÊ, 6, 100);//xA
			UnitFile.Read(it.Ëö, 6);//xB-bèIÉ\ãíè
			UnitFile.Read<int>(it.àyôÐÍ, 6, 100);
			UnitFile.Read(it.àyôÍÍ, 6);

			UnitFile.Read(it.fotøÊ, 6);
			UnitFile.Read<int>(it.fot¦, 6, 100);
			UnitFile.Read(it.Hit, 6);

			UnitDataS[UnitType(count)] = it;
			++count;
			*/
		}

		return false;
	}
}