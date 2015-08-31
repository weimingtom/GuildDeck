//Copyright © 
//[License]GNU Affero General Public License, version 3
//[Contact]
#pragma once
#include <SDXFrameWork.h>
#include "GUI_Factory.h"

namespace SDX_TD
{
	using namespace SDX;

	class SceneArchive : public SDX::IScene
	{
	public:
		//@Define
		UI_Frame 項目枠1 = { 285, {64,64,280,409} , 0.000000,5};
		UI_Button タブ0 = { 291, {64,3,55,55} , 0.000000,3};
		UI_Frame 項目枠2 = { 293, {350,64,280,409} , 0.000000,5};
		UI_Button タブ1 = { 295, {121,3,55,55} , 0.000000,3};
		UI_Button タブ2 = { 296, {178,3,55,55} , 0.000000,3};
		UI_Button タブ3 = { 297, {235,3,55,55} , 0.000000,3};
		UI_Button タブ5 = { 299, {349,3,55,55} , 0.000000,3};
		UI_Button タブ6 = { 300, {406,3,55,55} , 0.000000,3};
		UI_Button タブ4 = { 301, {292,3,55,55} , 0.000000,3};
		UI_Button タブ7 = { 302, {463,3,55,55} , 0.000000,3};
		UI_Button タブ8 = { 305, {520,3,55,55} , 0.000000,3};
		UI_Button タブ9 = { 306, {577,3,55,55} , 0.000000,3};
		UI_Text ランクアイコン = { 307, {305,75,31,23} , 0.000000,1,"std::string"};
		UI_Text 項目名 = { 332, {76,75,103,23} , 0.000000,1,"std::string"};
		UI_Text 記録 = { 333, {232,75,40,23} , 0.000000,1,"std::string"};
		//@End

		SceneArchive()
		{
			LoadGUI();
			Init();
		}

		//初期化
		void Init() override
		{
			//@Init
			//@End
		}

		//終了時
		void Final() override
		{
			//@Final
			//@End
		}

		//更新
		void Update() override
		{
			//@Update
			if(タブ0.isClick()){}
			if(タブ1.isClick()){}
			if(タブ2.isClick()){}
			if(タブ3.isClick()){}
			if(タブ5.isClick()){}
			if(タブ6.isClick()){}
			if(タブ4.isClick()){}
			if(タブ7.isClick()){}
			if(タブ8.isClick()){}
			if(タブ9.isClick()){}
			//@End
		}

		//描画
		void Draw() override
		{
#ifdef _DEBUG			
			if (Input::key.Return.on){ LoadGUI(); }
#endif
			//@Draw
			MSystem::frameS[項目枠1.frameNo].Draw(項目枠1.rect);
			MSystem::frameS[タブ0.frameNo].Draw(タブ0.rect);
			MSystem::frameS[項目枠2.frameNo].Draw(項目枠2.rect);
			MSystem::frameS[タブ1.frameNo].Draw(タブ1.rect);
			MSystem::frameS[タブ2.frameNo].Draw(タブ2.rect);
			MSystem::frameS[タブ3.frameNo].Draw(タブ3.rect);
			MSystem::frameS[タブ5.frameNo].Draw(タブ5.rect);
			MSystem::frameS[タブ6.frameNo].Draw(タブ6.rect);
			MSystem::frameS[タブ4.frameNo].Draw(タブ4.rect);
			MSystem::frameS[タブ7.frameNo].Draw(タブ7.rect);
			MSystem::frameS[タブ8.frameNo].Draw(タブ8.rect);
			MSystem::frameS[タブ9.frameNo].Draw(タブ9.rect);
			MFont::fontS[ランクアイコン.fontNo].DrawRotate(ランクアイコン.rect.GetCenter(),1,0,Color::White,ランクアイコン.text);
			MFont::fontS[項目名.fontNo].DrawRotate(項目名.rect.GetCenter(),1,0,Color::White,項目名.text);
			MFont::fontS[記録.fontNo].DrawRotate(記録.rect.GetCenter(),1,0,Color::White,記録.text);
			//@End
		}

		void LoadGUI() override
		{
#ifndef _DEBUG
			return;
#endif
			//@Load
			SDX::GUIData guiData = SDX::TMXtoGUI( TMX_FILE_NAME , "SceneArchive", GUI_Factory);

			項目枠1 = *dynamic_cast<UI_Frame*>(guiData.dataS[0].get());
			タブ0 = *dynamic_cast<UI_Button*>(guiData.dataS[1].get());
			項目枠2 = *dynamic_cast<UI_Frame*>(guiData.dataS[2].get());
			タブ1 = *dynamic_cast<UI_Button*>(guiData.dataS[3].get());
			タブ2 = *dynamic_cast<UI_Button*>(guiData.dataS[4].get());
			タブ3 = *dynamic_cast<UI_Button*>(guiData.dataS[5].get());
			タブ5 = *dynamic_cast<UI_Button*>(guiData.dataS[6].get());
			タブ6 = *dynamic_cast<UI_Button*>(guiData.dataS[7].get());
			タブ4 = *dynamic_cast<UI_Button*>(guiData.dataS[8].get());
			タブ7 = *dynamic_cast<UI_Button*>(guiData.dataS[9].get());
			タブ8 = *dynamic_cast<UI_Button*>(guiData.dataS[10].get());
			タブ9 = *dynamic_cast<UI_Button*>(guiData.dataS[11].get());
			ランクアイコン = *dynamic_cast<UI_Text*>(guiData.dataS[12].get());
			項目名 = *dynamic_cast<UI_Text*>(guiData.dataS[13].get());
			記録 = *dynamic_cast<UI_Text*>(guiData.dataS[14].get());
			//@End
		}
	};
}
