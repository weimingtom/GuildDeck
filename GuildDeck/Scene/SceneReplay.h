//Copyright © 
//[License]GNU Affero General Public License, version 3
//[Contact]
#pragma once
#include <SDXFrameWork.h>
#include "GUI_Factory.h"

namespace SDX_TD
{
	using namespace SDX;

	class SceneReplay : public SDX::IScene
	{
	public:
		//@Define
		UI_Frame リプレイ情報 = { 127, {362,302,276,110} , 0.000000,5};
		UI_Button 開始 = { 128, {365,414,272,60} , 0.000000,3};
		UI_Text スコア = { 129, {510,390,100,15} , 0.000000,0,"score"};
		UI_ScrollBar スクロールバー = { 132, {320,52,36,374} , 0.000000,4};
		UI_Frame マップ情報 = { 133, {362,2,276,300} , 0.000000,5};
		UI_Button リプレイ選択 = { 135, {67,9,248,40} , 0.000000,1};
		UI_Text ウィッチ = { 139, {535,330,50,15} , 0.000000,0,"std::string"};
		UI_Text トライアル = { 142, {510,310,50,15} , 0.000000,0,"Difficulty"};
		UI_Text 結果 = { 144, {510,370,100,15} , 0.000000,0,"Perfect"};
		UI_Frame ステージ一覧 = { 145, {62,2,300,476} , 0.000000,5};
		UI_Button 下スクロール = { 146, {318,434,40,40} , 0.000000,3};
		UI_Button 上スクロール = { 148, {318,6,40,40} , 0.000000,3};
		UI_Text 難易度 = { 246, {510,350,100,15} , 0.000000,0,"Difficulty"};
		UI_Text カップル = { 248, {560,310,50,15} , 0.000000,0,"Difficulty"};
		//@End

		SceneReplay()
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
			if(スクロールバー.isClick()){}
			if(リプレイ選択.isClick()){}
			if(下スクロール.isClick()){}
			if(上スクロール.isClick()){}
			//@End
		}

		//描画
		void Draw() override
		{
#ifdef _DEBUG			
			if (Input::key.Return.on){ LoadGUI(); }
#endif
			//@Draw
			MSystem::frameS[リプレイ情報.frameNo].Draw(リプレイ情報.rect);
			MSystem::frameS[開始.frameNo].Draw(開始.rect);
			MFont::fontS[スコア.fontNo].DrawRotate(スコア.rect.GetCenter(),1,0,Color::White,スコア.text);
			MSystem::frameS[スクロールバー.frameNo].Draw(スクロールバー.rect);
			MSystem::frameS[マップ情報.frameNo].Draw(マップ情報.rect);
			MSystem::frameS[リプレイ選択.frameNo].Draw(リプレイ選択.rect);
			MFont::fontS[ウィッチ.fontNo].DrawRotate(ウィッチ.rect.GetCenter(),1,0,Color::White,ウィッチ.text);
			MFont::fontS[トライアル.fontNo].DrawRotate(トライアル.rect.GetCenter(),1,0,Color::White,トライアル.text);
			MFont::fontS[結果.fontNo].DrawRotate(結果.rect.GetCenter(),1,0,Color::White,結果.text);
			MSystem::frameS[ステージ一覧.frameNo].Draw(ステージ一覧.rect);
			MSystem::frameS[下スクロール.frameNo].Draw(下スクロール.rect);
			MSystem::frameS[上スクロール.frameNo].Draw(上スクロール.rect);
			MFont::fontS[難易度.fontNo].DrawRotate(難易度.rect.GetCenter(),1,0,Color::White,難易度.text);
			MFont::fontS[カップル.fontNo].DrawRotate(カップル.rect.GetCenter(),1,0,Color::White,カップル.text);
			//@End
		}

		void LoadGUI() override
		{
#ifndef _DEBUG
			return;
#endif
			//@Load
			SDX::GUIData guiData = SDX::TMXtoGUI( TMX_FILE_NAME , "SceneReplay", GUI_Factory);

			リプレイ情報 = *dynamic_cast<UI_Frame*>(guiData.dataS[0].get());
			開始 = *dynamic_cast<UI_Button*>(guiData.dataS[1].get());
			スコア = *dynamic_cast<UI_Text*>(guiData.dataS[2].get());
			スクロールバー = *dynamic_cast<UI_ScrollBar*>(guiData.dataS[3].get());
			マップ情報 = *dynamic_cast<UI_Frame*>(guiData.dataS[4].get());
			リプレイ選択 = *dynamic_cast<UI_Button*>(guiData.dataS[5].get());
			ウィッチ = *dynamic_cast<UI_Text*>(guiData.dataS[6].get());
			トライアル = *dynamic_cast<UI_Text*>(guiData.dataS[7].get());
			結果 = *dynamic_cast<UI_Text*>(guiData.dataS[8].get());
			ステージ一覧 = *dynamic_cast<UI_Frame*>(guiData.dataS[9].get());
			下スクロール = *dynamic_cast<UI_Button*>(guiData.dataS[10].get());
			上スクロール = *dynamic_cast<UI_Button*>(guiData.dataS[11].get());
			難易度 = *dynamic_cast<UI_Text*>(guiData.dataS[12].get());
			カップル = *dynamic_cast<UI_Text*>(guiData.dataS[13].get());
			//@End
		}
	};
}
