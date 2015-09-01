//Copyright ? 2015 (´･@･) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>

namespace GD
{
	using namespace SDX;

	/*職業名*/
	enum class JobType
	{
		COUNT
	};

	/*職業サブタイプ*/
	enum class SubJobType
	{
		戦士,
		術士,
		僧侶,
		斥候,
		商人
	};

	/*敵名*/
	enum class EnemyType
	{

	};

	/*敵サブ種族*/
	/*多分全部出さない*/
	enum class SubEnemyType
	{
		鳥獣,
		幻獣,
		竜,
		不定形,//スライム、ウーズ
		物質,
		植物,
		精霊,
		水棲,
		人間,
		亜人,
		不死者,		
	};

	/*クエスト名*/
	enum class QuestType
	{

	};

	/*戦闘での配置*/
	enum class BattleType
	{
		前衛,
		後衛
	};

	/*攻撃属性*/
	enum class AttackType
	{
		物理,
		魔法,
		無属性,
		COUNT
	};

	/*難易度_ゲームモード*/
	enum class GameMode
	{
		導入,
		基本,
		通常
	};

	/*行動種類*/
	enum class CommandType
	{

	};

}