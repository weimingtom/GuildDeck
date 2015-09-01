//Copyright ? 2015 (´･@･) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "../System/EnumType.h"

namespace GD
{
	using namespace SDX;

	/*クエストの基本ステータス*/
	class QuestData
	{
	public:

	};


	EnumArray<QuestData, QuestType> QuestDataS;

	bool LoadQuestS()
	{
		return false;
	}

}