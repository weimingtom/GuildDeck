//Copyright ? 2015 (�L�@�) 
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
		EnemyType �푰;
		std::string ���O;
		std::string ������;

		
		int �U����;
	};

	EnumArray<EnemyData, EnemyType> EnemyDataS;

	bool LoadEnemyS()
	{
		File file("file/data/unit_data.dat", FileMode::Read, true);
		auto strS = file.GetCsvToString2();
		int count = 0;

		//CSV�t�@�C������ǂݍ���
		for (auto &it : EnemyDataS)
		{
			it.�푰 = EnemyType(count);
			it.���O = strS[count][0];
			//it.������ = strS[];

			/*
			it.�E�� = UnitType(count);
			if (it.�E�� <= UnitType::�~����) { it.is�E�B�b�` = true; }

			UnitFile.Read(it.���O);
			UnitFile.Read(it.������);

			UnitFile.Read(it.����);
			UnitFile.Read(it.�˒���);

			int param;
			UnitFile.Read(param);
			if (param == 1) { it.is�΋� = false; }
			if (param == 2) { it.is�Βn = false; }
			if (param == 3) { it.is�g���̂� = true; }

			UnitFile.Read(it.��b������);
			UnitFile.Read(it.�f�o�t��);
			UnitFile.Read(it.���U�푰);

			UnitFile.Read(it.�R�X�g, 6);
			UnitFile.Read(it.�U����, 6);
			UnitFile.Read(it.�˒�, 6);
			UnitFile.Read(it.�A��, 6);
			UnitFile.Read<int>(it.�e��, 6, 100);

			UnitFile.Read<int>(it.�x������, 6, 100);//�x��A
			UnitFile.Read(it.�˒���, 6);//�x��B-�b��I�ɏ\������
			UnitFile.Read<int>(it.�y��З�, 6, 100);
			UnitFile.Read(it.�y���͈�, 6);

			UnitFile.Read(it.�f�o�t����, 6);
			UnitFile.Read<int>(it.�f�o�t��, 6, 100);
			UnitFile.Read(it.Hit��, 6);

			UnitDataS[UnitType(count)] = it;
			++count;
			*/
		}

		return false;
	}
}