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
	/*冒険者の共通基底クラス*/
	class IUnit
	{
	public:
		JobType 職種;//変動しないパラメータは職業を参照
		int Lv;
		int 最大攻撃力;
		int 最大生命力;
		int 現在攻撃力;
		int 現在生命力;
		bool is怪我;

		/*店にいる時の描画処理*/
		void DrawShop()
		{

		}

	};
	
}