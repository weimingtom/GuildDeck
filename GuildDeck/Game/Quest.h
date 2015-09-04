//Copyright ? 2015 (´･@･) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "../Struct/JobData.h"
#include "../System/EnumType.h"

namespace GD
{
	using namespace SDX;

	/*クエストの共通基底クラス*/
	class IQuest
	{
	public:
		EnemyType 敵種類;
		int 残り期日;
		int 敵数;

	};
}