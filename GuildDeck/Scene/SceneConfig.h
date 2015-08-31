//Copyright © 
//[License]GNU Affero General Public License, version 3
//[Contact]
#pragma once
#include <SDXFrameWork.h>
#include "GUI_Factory.h"

namespace SDX_TD
{
	using namespace SDX;

	class SceneConfig : public SDX::IScene
	{
	public:
		//@Define
		UI_Button 効果音＋ = { 90, {555,25,60,60} , 0.000000,3};
		UI_Button 効果音－ = { 91, {286,25,60,60} , 0.000000,3};
		UI_Button BGM－ = { 92, {286,125,60,60} , 0.000000,3};
		UI_Button BGM＋ = { 93, {555,126,60,60} , 0.000000,3};
		UI_Frame グリッド = { 94, {95,210,240,50} , 0.000000,5};
		UI_Frame 敵HP = { 95, {365,210,240,50} , 0.000000,5};
		UI_Frame エフェクト表示 = { 96, {365,280,240,50} , 0.000000,5};
		UI_Frame タッチ操作 = { 97, {95,280,240,50} , 0.000000,5};
		UI_Frame リプレイ保存 = { 98, {365,350,240,50} , 0.000000,5};
		UI_Text 効果音 = { 100, {114,40,120,30} , 0.000000,3,"Sound Volume"};
		UI_Frame BGMゲージ = { 102, {350,126,200,61} , 0.000000,1};
		UI_Frame 効果音ゲージ = { 103, {350,24,200,60} , 0.000000,1};
		UI_Frame 初期配置 = { 124, {95,350,240,50} , 0.000000,5};
		UI_Button グリッドChk = { 227, {100,215,40,40} , 0.000000,3};
		UI_Button 敵HPChk = { 229, {370,215,40,40} , 0.000000,3};
		UI_Button エフェクト表示Chk = { 230, {370,285,40,40} , 0.000000,3};
		UI_Button リプレイ保存Chk = { 231, {370,355,40,40} , 0.000000,3};
		UI_Button タッチ操作Chk = { 232, {100,285,40,40} , 0.000000,3};
		UI_Button 初期配置Chk = { 233, {100,355,40,40} , 0.000000,3};
		UI_Text BGM = { 234, {126,140,100,30} , 0.000000,3,"BGM Volume"};
		UI_Frame 画面サイズ = { 251, {95,420,240,50} , 0.000000,5};
		UI_Button 画面サイズChk = { 252, {100,425,40,40} , 0.000000,3};
		UI_Button おまけChk = { 254, {370,425,40,40} , 0.000000,3};
		UI_Frame おまけ = { 255, {365,420,240,50} , 0.000000,5};
		//@End

		SceneConfig()
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
			if(効果音＋.isClick()){}
			if(効果音－.isClick()){}
			if(BGM－.isClick()){}
			if(BGM＋.isClick()){}
			if(グリッドChk.isClick()){}
			if(敵HPChk.isClick()){}
			if(エフェクト表示Chk.isClick()){}
			if(リプレイ保存Chk.isClick()){}
			if(タッチ操作Chk.isClick()){}
			if(初期配置Chk.isClick()){}
			if(画面サイズChk.isClick()){}
			if(おまけChk.isClick()){}
			//@End
		}

		//描画
		void Draw() override
		{
#ifdef _DEBUG			
			if (Input::key.Return.on){ LoadGUI(); }
#endif
			//@Draw
			MSystem::frameS[効果音＋.frameNo].Draw(効果音＋.rect);
			MSystem::frameS[効果音－.frameNo].Draw(効果音－.rect);
			MSystem::frameS[BGM－.frameNo].Draw(BGM－.rect);
			MSystem::frameS[BGM＋.frameNo].Draw(BGM＋.rect);
			MSystem::frameS[グリッド.frameNo].Draw(グリッド.rect);
			MSystem::frameS[敵HP.frameNo].Draw(敵HP.rect);
			MSystem::frameS[エフェクト表示.frameNo].Draw(エフェクト表示.rect);
			MSystem::frameS[タッチ操作.frameNo].Draw(タッチ操作.rect);
			MSystem::frameS[リプレイ保存.frameNo].Draw(リプレイ保存.rect);
			MFont::fontS[効果音.fontNo].DrawRotate(効果音.rect.GetCenter(),1,0,Color::White,効果音.text);
			MSystem::frameS[BGMゲージ.frameNo].Draw(BGMゲージ.rect);
			MSystem::frameS[効果音ゲージ.frameNo].Draw(効果音ゲージ.rect);
			MSystem::frameS[初期配置.frameNo].Draw(初期配置.rect);
			MSystem::frameS[グリッドChk.frameNo].Draw(グリッドChk.rect);
			MSystem::frameS[敵HPChk.frameNo].Draw(敵HPChk.rect);
			MSystem::frameS[エフェクト表示Chk.frameNo].Draw(エフェクト表示Chk.rect);
			MSystem::frameS[リプレイ保存Chk.frameNo].Draw(リプレイ保存Chk.rect);
			MSystem::frameS[タッチ操作Chk.frameNo].Draw(タッチ操作Chk.rect);
			MSystem::frameS[初期配置Chk.frameNo].Draw(初期配置Chk.rect);
			MFont::fontS[BGM.fontNo].DrawRotate(BGM.rect.GetCenter(),1,0,Color::White,BGM.text);
			MSystem::frameS[画面サイズ.frameNo].Draw(画面サイズ.rect);
			MSystem::frameS[画面サイズChk.frameNo].Draw(画面サイズChk.rect);
			MSystem::frameS[おまけChk.frameNo].Draw(おまけChk.rect);
			MSystem::frameS[おまけ.frameNo].Draw(おまけ.rect);
			//@End
		}

		void LoadGUI() override
		{
#ifndef _DEBUG
			return;
#endif
			//@Load
			SDX::GUIData guiData = SDX::TMXtoGUI( TMX_FILE_NAME , "SceneConfig", GUI_Factory);

			効果音＋ = *dynamic_cast<UI_Button*>(guiData.dataS[0].get());
			効果音－ = *dynamic_cast<UI_Button*>(guiData.dataS[1].get());
			BGM－ = *dynamic_cast<UI_Button*>(guiData.dataS[2].get());
			BGM＋ = *dynamic_cast<UI_Button*>(guiData.dataS[3].get());
			グリッド = *dynamic_cast<UI_Frame*>(guiData.dataS[4].get());
			敵HP = *dynamic_cast<UI_Frame*>(guiData.dataS[5].get());
			エフェクト表示 = *dynamic_cast<UI_Frame*>(guiData.dataS[6].get());
			タッチ操作 = *dynamic_cast<UI_Frame*>(guiData.dataS[7].get());
			リプレイ保存 = *dynamic_cast<UI_Frame*>(guiData.dataS[8].get());
			効果音 = *dynamic_cast<UI_Text*>(guiData.dataS[9].get());
			BGMゲージ = *dynamic_cast<UI_Frame*>(guiData.dataS[10].get());
			効果音ゲージ = *dynamic_cast<UI_Frame*>(guiData.dataS[11].get());
			初期配置 = *dynamic_cast<UI_Frame*>(guiData.dataS[12].get());
			グリッドChk = *dynamic_cast<UI_Button*>(guiData.dataS[13].get());
			敵HPChk = *dynamic_cast<UI_Button*>(guiData.dataS[14].get());
			エフェクト表示Chk = *dynamic_cast<UI_Button*>(guiData.dataS[15].get());
			リプレイ保存Chk = *dynamic_cast<UI_Button*>(guiData.dataS[16].get());
			タッチ操作Chk = *dynamic_cast<UI_Button*>(guiData.dataS[17].get());
			初期配置Chk = *dynamic_cast<UI_Button*>(guiData.dataS[18].get());
			BGM = *dynamic_cast<UI_Text*>(guiData.dataS[19].get());
			画面サイズ = *dynamic_cast<UI_Frame*>(guiData.dataS[20].get());
			画面サイズChk = *dynamic_cast<UI_Button*>(guiData.dataS[21].get());
			おまけChk = *dynamic_cast<UI_Button*>(guiData.dataS[22].get());
			おまけ = *dynamic_cast<UI_Frame*>(guiData.dataS[23].get());
			//@End
		}
	};
}
