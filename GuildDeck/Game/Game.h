//Copyright ? 2015 (�L�@�) 
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
		int �^�[����;
		int �o�ϗ�;		

		std::vector<IQuest*> questDeck;//�N�G�X�g�R�D
		std::vector<IQuest*> questOpen;//���J�ς݃N�G�X�g
		std::vector<IQuest*> questClear;//�U���ς݃N�G�X�g
		std::vector<IQuest*> questTrash;//�����؂�N�G�X�g�A�̏�

		std::vector<IUnit*> guildDeck;//�M�������R�D
		std::vector<IUnit*> guildRest;//�M�������x�ɒ�
		std::vector<IUnit*> guildTrash;//�M���������
		std::vector<IUnit*> guildMember;//���݂̎�D
		std::vector<IUnit*> guildShop;//�M�����������

		Game()
		{}

		void Init()
		{
			//�e�z������Z�b�g

			//�����f�b�L�̏���
			//�V�� 7�A��m 3

			//

		}

		/*�e�^�[���̏���*/
		void Update()
		{
			//�N�G�X�g�I���Ő퓬����

			//����̃J�[�h�I���ōw������
			
		}

		void Draw()
		{

		}

		void Reset()
		{

		}

	};

}