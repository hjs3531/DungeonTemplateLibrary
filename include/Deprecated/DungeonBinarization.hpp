﻿/*#######################################################################################
	Made by Kasugaccho
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	This code is licensed under CC0.
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DUNGEON_BINARIZATION_HPP
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DUNGEON_BINARIZATION_HPP

/* Character Code : UTF-8 (BOM) */
/* [2019/03/08] Android NDK Compile (Clang 5.0) : already checked */

#include <cstddef>
#include <Macros/constexpr.hpp>

//Dungeon Template Library Namespace

namespace dtl {
	inline namespace utility {
		namespace stl {

			template<typename Matrix_, typename STL2_>
			DTL_CONSTEXPR_CPP14
				void binarizationBool(Matrix_& matrix_, STL2_& stl2_) noexcept {
				if (matrix_.size() != stl2_.size()) return;
				for (std::size_t row{}; row < matrix_.size(); ++row)
					for (std::size_t col{}; col < matrix_[row].size(); ++col) {
						if (matrix_[row].size() != stl2_[row].size()) continue;
						if (matrix_[row][col]) stl2_[row][col] = true;
						else stl2_[row][col] = false;
					}
			}

			template<typename Matrix_, typename STL2_, typename Matrix_Int_>
			DTL_CONSTEXPR_CPP14
				void binarizationBool(Matrix_ & matrix_, STL2_ & stl2_, const Matrix_Int_ value_) noexcept {
				if (matrix_.size() != stl2_.size()) return;
				for (std::size_t row{}; row < matrix_.size(); ++row)
					for (std::size_t col{}; col < matrix_[row].size(); ++col) {
						if (matrix_[row].size() != stl2_[row].size()) continue;
						if (matrix_[row][col] >= value_) stl2_[row][col] = true;
						else stl2_[row][col] = false;
					}
			}

		} //namespace
	}
}

#endif //Included Dungeon Template Library