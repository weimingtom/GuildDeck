//Copyright ? 2015 (´･@･) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "Quest.h"
#include "Unit.h"

namespace GD
{
	using namespace SDX;

	class Game : public IScene
	{
	private:

	public:
		int ターン数;
		int 経済力;		

		std::vector<IQuest*> questDeck;//クエスト山札
		std::vector<IQuest*> questOpen;//公開済みクエスト
		std::vector<IQuest*> questClear;//攻略済みクエスト
		std::vector<IQuest*> questTrash;//期限切れクエスト、捨場

		std::vector<IUnit*> guildDeck;//ギルメン山札
		std::vector<IUnit*> guildRest;//ギルメン休暇中
		std::vector<IUnit*> guildTrash;//ギルメン墓場
		std::vector<IUnit*> guildMember;//現在の手札
		std::vector<IUnit*> guildShop;//ギルメン売り場

		Game()
		{}

		void Init()
		{
			//各配列をリセット

			//初期デッキの準備
			//新兵 7、戦士 3

			//

		}

		/*各ターンの処理*/
		void Update()
		{
			//クエスト選択で戦闘処理

			//酒場のカード選択で購入処理
			
		}

		void Draw()
		{

		}

		void Reset()
		{

		}

	};

}