﻿//Copyright © 
//[License]GNU Affero General Public License, version 3
//[Contact]
#pragma once
#include <Tiled/IGUI.h>

namespace SDX_TD
{
	/** クラスの説明.*/
	class UI_ScrollBar : public SDX::IGUI
	{
	public:
		//@メンバー宣言
		int frameNo;
		//@End

		//@コンストラクタ
		UI_ScrollBar( int id , const Rect& rect, double angle,int frameNo):
			frameNo(frameNo),
			IGUI(id,rect,angle)
		{}
		//@End

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
			if(isClick()){}
			//@End
		}

		//描画
		void Draw() override
		{
			//@Draw
			MSystem::frameS[frameNo].Draw(rect);
			//@End
		}
	};
}
