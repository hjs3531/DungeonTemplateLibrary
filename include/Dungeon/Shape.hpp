﻿/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/

///// ///// ///// 形状生成 ///// ///// /////

//#define NOT_INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP
#ifndef NOT_INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP

#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP

#include <Shape/AbsoluteMemberRect.hpp>
#include <Shape/AbsoluteRect.hpp>
#include <Shape/Border.hpp>
//Shape_Border + また、指定マスの列数が偶数の時[列数-2列目]を設置し、行数が偶数の時[行数-2行目]のマスに任意の値(1)を設置する(※行/列は0から数える)。
#include <Shape/BorderOdd.hpp>
#include <Shape/CellularAutomatonIsland.hpp>
#include <Shape/CellularAutomatonMixIsland.hpp>
#include <Shape/DiamondSquareAverage.hpp>
#include <Shape/DiamondSquareAverageCornerIsland.hpp>
#include <Shape/DiamondSquareAverageIsland.hpp>
#include <Shape/FractalIsland.hpp>
#include <Shape/FractalLoopIsland.hpp>
#include <Shape/MazeDig.hpp>
#include <Shape/MixRect.hpp>
#include <Shape/Point.hpp>
//指定マスの偶数列目かつ偶数行目に任意の値(1)を設置する。
#include <Shape/PointGrid.hpp>
//Shape_BorderOdd + Shape_PointGrid + Shape_RandomRect
#include <Shape/PointGridAndSomeBlocksWithBorder.hpp>
//Shape_BorderOdd + Shape_PointGrid
#include <Shape/PointGridWithBorder.hpp>
//指定マスに一定の確率で任意の値(1)を設置する。
#include <Shape/RandomRect.hpp>
#include <Shape/RandomVoronoi.hpp>
//指定マスの全てに任意の値(1)を設置する。
#include <Shape/Rect.hpp>
#include <Shape/Reversi.hpp>
#include <Shape/SimpleRogueLike.hpp>
#include <Shape/SimpleVoronoiIsland.hpp>
#include <Shape/WhiteNoise.hpp>

#endif //INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP
#endif //NOT_INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_HPP