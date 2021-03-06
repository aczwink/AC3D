/*
 * Copyright (c) 2017 Amir Czwink (amir130@hotmail.de)
 *
 * This file is part of ACGR.
 *
 * ACGR is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ACGR is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ACGR.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

namespace ACGR
{
	//Forward declarations
	class Texture;

	class SkyBox
	{
	public:
		//Members
		Texture *pLeft;
		Texture *pRight;
		Texture *pBottom;
		Texture *pTop;
		Texture *pBack;
		Texture *pFront;

		//Constructor
		inline SkyBox()
		{
			this->pLeft = nullptr;
			this->pRight = nullptr;
			this->pBottom = nullptr;
			this->pTop = nullptr;
			this->pBack = nullptr;
			this->pFront = nullptr;
		}
	};
}