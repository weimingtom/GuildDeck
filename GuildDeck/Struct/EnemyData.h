//Copyright ? 2015 (´･@･) 
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
		EnemyType 種族;
		std::string 名前;
		std::string 説明文;

		
		int 攻撃力;
	};

	EnumArray<EnemyData, EnemyType> EnemyDataS;

	bool LoadEnemyS()
	{
		File file("file/data/unit_data.dat", FileMode::Read, true);
		auto strS = file.GetCsvToString2();
		int count = 0;

		//CSVファイルから読み込む
		for (auto &it : EnemyDataS)
		{
			it.種族 = EnemyType(count);
			it.名前 = strS[count][0];
			//it.説明文 = strS[];

			/*
			it.職種 = UnitType(count);
			if (it.職種 <= UnitType::ミルラ) { it.isウィッチ = true; }

			UnitFile.Read(it.名前);
			UnitFile.Read(it.説明文);

			UnitFile.Read(it.属性);
			UnitFile.Read(it.射程種);

			int param;
			UnitFile.Read(param);
			if (param == 1) { it.is対空 = false; }
			if (param == 2) { it.is対地 = false; }
			if (param == 3) { it.is使い捨て = true; }

			UnitFile.Read(it.基礎強化回数);
			UnitFile.Read(it.デバフ種);
			UnitFile.Read(it.特攻種族);

			UnitFile.Read(it.コスト, 6);
			UnitFile.Read(it.攻撃力, 6);
			UnitFile.Read(it.射程, 6);
			UnitFile.Read(it.連射, 6);
			UnitFile.Read<int>(it.弾速, 6, 100);

			UnitFile.Read<int>(it.支援効果, 6, 100);//支援A
			UnitFile.Read(it.射程幅, 6);//支援B-暫定的に十字代わり
			UnitFile.Read<int>(it.炸裂威力, 6, 100);
			UnitFile.Read(it.炸裂範囲, 6);

			UnitFile.Read(it.デバフ効果, 6);
			UnitFile.Read<int>(it.デバフ率, 6, 100);
			UnitFile.Read(it.Hit数, 6);

			UnitDataS[UnitType(count)] = it;
			++count;
			*/
		}

		return false;
	}
}