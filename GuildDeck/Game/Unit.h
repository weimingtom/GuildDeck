//Copyright ? 2015 (�L�@�) 
//[License] GNU Affero General Public License, version 3
//[Contact] http://tacoika.blog87.fc2.com/
#pragma once
#include <SDXFramework.h>
#include "../Struct/JobData.h"
#include "../System/EnumType.h"

namespace GD
{
	using namespace SDX;
	/*�`���҃N���X*/
	class Unit
	{
	public:
		JobType �E��;//�ϓ����Ȃ��p�����[�^�͐E�Ƃ��Q��
		int Lv;
		int �ő�U����;
		int �ő吶����;
		int ���ݍU����;
		int ���ݐ�����;
		bool is����;
	};
	
}