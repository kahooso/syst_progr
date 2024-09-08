#pragma once
#include <string>
#include <typeinfo>

class Rectangle
{
private:
	double width; // ширина
	double height; // высота
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Rectangle() : height(0), width(0) { }

	/// <summary>
	/// Конструктор с двумя параметрами
	/// </summary>
	/// <param name="weight"></param>
	/// <param name="height"></param>
	Rectangle(double width, double height) {
		set_height(height);
		set_width(width);
	}

	/// <summary>
	/// Метод чтения weight
	/// </summary>
	/// <returns></returns>
	double get_width() const {
		return this->width;
	}

	/// <summary>
	/// Метод чтения height
	/// </summary>
	/// <returns></returns>
	double get_height() const {
		return this->height;
	}

	/// <summary>
	/// Метод устоновки height
	/// </summary>
	/// <param name="height"></param>
	/// <returns></returns>
	bool set_height(const double& height) {
		if (height < 0)
			return false;

		this->height = height;

		return true;
	}

	/// <summary>
	/// Метод устоновки weight
	/// </summary>
	/// <param name="height"></param>
	/// <returns></returns>
	bool set_width(const double& width) {
		if (width < 0)
			return false;

		this->width = width;

		return true;
	}

	/// <summary>
	/// Метод to_string()
	/// </summary>
	/// <returns></returns>
	std::string rect_to_string() const {
		return	"ширина -> " + std::to_string(this->width) +
				"\nвысота-> " + std::to_string(this->height);
	}
};