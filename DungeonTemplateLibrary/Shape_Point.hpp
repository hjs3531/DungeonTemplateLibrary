﻿#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_POINT
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_SHAPE_POINT
//:::::----------::::::::::----------::::://
//     Dungeon Template Library     //
//          Made by Gaccho.          //
// This code is licensed under CC0.  //
//       wanotaitei@gmail.com       //
//:::::----------::::::::::----------::::://

/* Bug Check : not checked */
/* Android NDK Compile (Clang 5.0) : already checked */

#include <cstddef>

//STLデータ
namespace dtl::shape::stl {

	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		if (matrix_.size() <= set_y_ || matrix_[set_y_].size() <= set_x_) return;
		matrix_[set_y_][set_x_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		if (matrix_.size() <= set_y_ || matrix_[set_y_].size() <= set_x_) return;
		matrix_[set_y_][set_x_] = value_;
	}

	template<typename Matrix_Int_>
	class PointUnique {
	private:
		std::size_t x{}, y{};
		Matrix_Int_ value{ 1 };
	public:
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_) noexcept :x(x_), y(y_) {}
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) noexcept :x(x_), y(y_), value(value_) {}

		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_) const noexcept {
			dtl::shape::stl::createPoint(matrix_, x, y, value);
		}
	};
	template<typename Matrix_Int_>
	class Point {
	private:
	public:
		constexpr Point() noexcept = default;
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t x_, const std::size_t y_) const noexcept {
			dtl::shape::stl::createPoint(matrix_, x_, y_);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) const noexcept {
			dtl::shape::stl::createPoint(matrix_, x_, y_, value_);
		}
	};

} //namespace

namespace dtl::shape::normal {

	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		matrix_[set_y_][set_x_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		matrix_[set_y_][set_x_] = value_;
	}
	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_][set_x_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_][set_x_] = value_;
	}

	template<typename Matrix_Int_>
	class PointUnique {
	private:
		std::size_t x{}, y{};
		Matrix_Int_ value{ 1 };
	public:
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_) noexcept :x(x_), y(y_) {}
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) noexcept :x(x_), y(y_), value(value_) {}

		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_) const noexcept {
			dtl::shape::normal::createPoint(matrix_, x, y, value);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t size_x_, const std::size_t size_y_) const noexcept {
			dtl::shape::normal::createPoint(matrix_, size_x_, size_y_, x, y, value);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t size_) const noexcept {
			dtl::shape::normal::createPoint(matrix_, size_, size_, x, y, value);
		}
	};
	template<typename Matrix_Int_>
	class Point {
	private:
	public:
		constexpr Point() noexcept = default;

	};

}

namespace dtl::shape::array {

	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_*x_ + set_x_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_*x_ + set_x_] = value_;
	}

	template<typename Matrix_Int_>
	class PointUnique {
	private:
		std::size_t x{}, y{};
		Matrix_Int_ value{ 1 };
	public:
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_) noexcept :x(x_), y(y_) {}
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) noexcept :x(x_), y(y_), value(value_) {}

		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t size_x_, const std::size_t size_y_) const noexcept {
			dtl::shape::array::createPoint(matrix_, size_x_, size_y_, x, y, value);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t size_) const noexcept {
			dtl::shape::array::createPoint(matrix_, size_, size_, x, y, value);
		}
	};

}

namespace dtl::shape::layer::stl {

	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, std::size_t set_x_, const std::size_t set_y_) noexcept {
		if (matrix_.size() <= set_y_ || matrix_[set_y_].size() <= set_x_) return;
		matrix_[set_y_][set_x_][layer_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		if (matrix_.size() <= set_y_ || matrix_[set_y_].size() <= set_x_) return;
		matrix_[set_y_][set_x_][layer_] = value_;
	}

	template<typename Matrix_Int_>
	class PointUnique {
	private:
		std::size_t x{}, y{};
		Matrix_Int_ value{ 1 };
	public:
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_) noexcept :x(x_), y(y_) {}
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) noexcept :x(x_), y(y_), value(value_) {}

		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t layer_) const noexcept {
			dtl::shape::layer::stl::createPoint(matrix_, layer_, x, y, value);
		}
	};

} //namespace

namespace dtl::shape::layer::normal {

	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		matrix_[set_y_][set_x_][layer_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		matrix_[set_y_][set_x_][layer_] = value_;
	}
	template<typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_][set_x_][layer_] = 1;
	}
	template<typename Matrix_Int_, typename Matrix_>
	constexpr void createPoint(Matrix_& matrix_, const std::size_t layer_, const std::size_t x_, const std::size_t y_, const std::size_t set_x_, const std::size_t set_y_, const Matrix_Int_ value_) noexcept {
		if (x_ <= set_x_ || y_ <= set_y_) return;
		matrix_[set_y_][set_x_][layer_] = value_;
	}

	template<typename Matrix_Int_>
	class PointUnique {
	private:
		std::size_t x{}, y{};
		Matrix_Int_ value{ 1 };
	public:
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_) noexcept :x(x_), y(y_) {}
		constexpr explicit PointUnique(const std::size_t x_, const std::size_t y_, const Matrix_Int_ value_) noexcept :x(x_), y(y_), value(value_) {}

		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t layer_) const noexcept {
			dtl::shape::layer::normal::createPoint(matrix_, layer_, x, y, value);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t layer_, const std::size_t size_x_, const std::size_t size_y_) const noexcept {
			dtl::shape::layer::normal::createPoint(matrix_, layer_, size_x_, size_y_, x, y, value);
		}
		template<typename Matrix_>
		constexpr void draw(Matrix_& matrix_, const std::size_t layer_, const std::size_t size_) const noexcept {
			dtl::shape::layer::normal::createPoint(matrix_, layer_, size_, size_, x, y, value);
		}
	};

}

#endif //Included Dungeon Template Library