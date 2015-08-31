//Copyright © 
//[License]GNU Affero General Public License, version 3
//[Contact]
#pragma once
#include <SDXFrameWork.h>
#include "GUI_Factory.h"

namespace SDX_TD
{
	using namespace SDX;

	class SceneData : public SDX::IScene
	{
	public:
		//@Define
		UI_Frame 難易度情報 = { 65, {62,258,300,216} , 0.000000,5};
		UI_Frame ステージ一覧 = { 29, {362,258,276,154} , 0.000000,5};
		UI_Button 開始 = { 30, {365,414,272,60} , 0.000000,3};
		UI_Button 難易度－ = { 60, {83,266,40,40} , 0.000000,3};
		UI_Button 難易度＋ = { 61, {302,266,40,40} , 0.000000,3};
		UI_Frame ウィッチ一覧 = { 63, {62,2,300,256} , 0.000000,5};
		UI_Frame マップ情報 = { 64, {362,2,276,256} , 0.000000,5};
		UI_Button 面数Minus = { 107, {368,263,40,144} , 0.000000,3};
		UI_Button ステージA = { 109, {415,264,170,36} , 0.000000,1};
		UI_Button ステージB = { 110, {415,300,170,36} , 0.000000,1};
		UI_Button ステージC = { 111, {415,336,170,36} , 0.000000,1};
		UI_Button ステージD = { 112, {415,372,170,36} , 0.000000,1};
		UI_Button 面数Plus = { 113, {592,263,40,144} , 0.000000,3};
		UI_Frame 難易度 = { 114, {128,266,167,40} , 0.000000,5};
		UI_Text Wave数 = { 115, {250,349,60,25} , 0.000000,1,"25 Wave"};
		UI_Text 出現数 = { 116, {251,379,60,25} , 0.000000,1,"敵数 1.2倍"};
		UI_Text HP補正 = { 117, {251,409,60,24} , 0.000000,1,"HP　1.2倍"};
		UI_Text Lv補正 = { 118, {252,439,60,24} , 0.000000,1,"LV 1.5倍"};
		UI_Frame ウィッチアイコン = { 119, {68,32,20,20} , 0.000000,0};
		UI_Button シングル_カップル = { 31, {213,311,130,30} , 0.000000,3};
		UI_Button スキル = { 59, {83,311,130,30} , 0.000000,3};
		UI_Text ウィッチ名 = { 121, {96,32,56,20} , 0.000000,0,"std::string"};
		UI_Text 星 = { 122, {155,31,21,21} , 0.000000,0,"std::string"};
		UI_Text スコア = { 123, {278,32,30,22} , 0.000000,2,"std::string"};
		UI_Text ハイスコア = { 240, {64,9,126,22} , 0.000000,2,"Hi Score"};
		//@End

		SceneData()
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
			if(開始.isClick()){}
			if(難易度－.isClick()){}
			if(難易度＋.isClick()){}
			if(面数Minus.isClick()){}
			if(ステージA.isClick()){}
			if(ステージB.isClick()){}
			if(ステージC.isClick()){}
			if(ステージD.isClick()){}
			if(面数Plus.isClick()){}
			if(シングル_カップル.isClick()){}
			if(スキル.isClick()){}
			//@End
		}

		//描画
		void Draw() override
		{
#ifdef _DEBUG			
			if (Input::key.Return.on){ LoadGUI(); }
#endif
			//@Draw
			MSystem::frameS[難易度情報.frameNo].Draw(難易度情報.rect);
			MSystem::frameS[ステージ一覧.frameNo].Draw(ステージ一覧.rect);
			MSystem::frameS[開始.frameNo].Draw(開始.rect);
			MSystem::frameS[難易度－.frameNo].Draw(難易度－.rect);
			MSystem::frameS[難易度＋.frameNo].Draw(難易度＋.rect);
			MSystem::frameS[ウィッチ一覧.frameNo].Draw(ウィッチ一覧.rect);
			MSystem::frameS[マップ情報.frameNo].Draw(マップ情報.rect);
			MSystem::frameS[面数Minus.frameNo].Draw(面数Minus.rect);
			MSystem::frameS[ステージA.frameNo].Draw(ステージA.rect);
			MSystem::frameS[ステージB.frameNo].Draw(ステージB.rect);
			MSystem::frameS[ステージC.frameNo].Draw(ステージC.rect);
			MSystem::frameS[ステージD.frameNo].Draw(ステージD.rect);
			MSystem::frameS[面数Plus.frameNo].Draw(面数Plus.rect);
			MSystem::frameS[難易度.frameNo].Draw(難易度.rect);
			MFont::fontS[Wave数.fontNo].DrawRotate(Wave数.rect.GetCenter(),1,0,Color::White,Wave数.text);
			MFont::fontS[出現数.fontNo].DrawRotate(出現数.rect.GetCenter(),1,0,Color::White,出現数.text);
			MFont::fontS[HP補正.fontNo].DrawRotate(HP補正.rect.GetCenter(),1,0,Color::White,HP補正.text);
			MFont::fontS[Lv補正.fontNo].DrawRotate(Lv補正.rect.GetCenter(),1,0,Color::White,Lv補正.text);
			MSystem::frameS[ウィッチアイコン.frameNo].Draw(ウィッチアイコン.rect);
			MSystem::frameS[シングル_カップル.frameNo].Draw(シングル_カップル.rect);
			MSystem::frameS[スキル.frameNo].Draw(スキル.rect);
			MFont::fontS[ウィッチ名.fontNo].DrawRotate(ウィッチ名.rect.GetCenter(),1,0,Color::White,ウィッチ名.text);
			MFont::fontS[星.fontNo].DrawRotate(星.rect.GetCenter(),1,0,Color::White,星.text);
			MFont::fontS[スコア.fontNo].DrawRotate(スコア.rect.GetCenter(),1,0,Color::White,スコア.text);
			MFont::fontS[ハイスコア.fontNo].DrawRotate(ハイスコア.rect.GetCenter(),1,0,Color::White,ハイスコア.text);
			//@End
		}

		void LoadGUI() override
		{
#ifndef _DEBUG
			return;
#endif
			//@Load
			SDX::GUIData guiData = SDX::TMXtoGUI( TMX_FILE_NAME , "SceneData", GUI_Factory);

			難易度情報 = *dynamic_cast<UI_Frame*>(guiData.dataS[0].get());
			ステージ一覧 = *dynamic_cast<UI_Frame*>(guiData.dataS[1].get());
			開始 = *dynamic_cast<UI_Button*>(guiData.dataS[2].get());
			難易度－ = *dynamic_cast<UI_Button*>(guiData.dataS[3].get());
			難易度＋ = *dynamic_cast<UI_Button*>(guiData.dataS[4].get());
			ウィッチ一覧 = *dynamic_cast<UI_Frame*>(guiData.dataS[5].get());
			マップ情報 = *dynamic_cast<UI_Frame*>(guiData.dataS[6].get());
			面数Minus = *dynamic_cast<UI_Button*>(guiData.dataS[7].get());
			ステージA = *dynamic_cast<UI_Button*>(guiData.dataS[8].get());
			ステージB = *dynamic_cast<UI_Button*>(guiData.dataS[9].get());
			ステージC = *dynamic_cast<UI_Button*>(guiData.dataS[10].get());
			ステージD = *dynamic_cast<UI_Button*>(guiData.dataS[11].get());
			面数Plus = *dynamic_cast<UI_Button*>(guiData.dataS[12].get());
			難易度 = *dynamic_cast<UI_Frame*>(guiData.dataS[13].get());
			Wave数 = *dynamic_cast<UI_Text*>(guiData.dataS[14].get());
			出現数 = *dynamic_cast<UI_Text*>(guiData.dataS[15].get());
			HP補正 = *dynamic_cast<UI_Text*>(guiData.dataS[16].get());
			Lv補正 = *dynamic_cast<UI_Text*>(guiData.dataS[17].get());
			ウィッチアイコン = *dynamic_cast<UI_Frame*>(guiData.dataS[18].get());
			シングル_カップル = *dynamic_cast<UI_Button*>(guiData.dataS[19].get());
			スキル = *dynamic_cast<UI_Button*>(guiData.dataS[20].get());
			ウィッチ名 = *dynamic_cast<UI_Text*>(guiData.dataS[21].get());
			星 = *dynamic_cast<UI_Text*>(guiData.dataS[22].get());
			スコア = *dynamic_cast<UI_Text*>(guiData.dataS[23].get());
			ハイスコア = *dynamic_cast<UI_Text*>(guiData.dataS[24].get());
			//@End
		}
	};
}
