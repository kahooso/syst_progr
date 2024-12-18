#pragma once
#include "Rectangle.h"

/// <summary>
/// ����������� �� ���������
/// </summary>
Rectangle::Rectangle() : height(0), width(0) { }

/// <summary>
/// ����������� � ����� �����������
/// </summary>
/// <param name="weight"></param>
/// <param name="height"></param>
Rectangle::Rectangle(double width, double height) {
	set_height(height);
	set_width(width);
}

/// <summary>
/// ����� ������ weight
/// </summary>
/// <returns></returns>
double Rectangle::get_width() const {
	return this->width;
}

/// <summary>
/// ����� ������ height
/// </summary>
/// <returns></returns>
double Rectangle::get_height() const {
	return this->height;
}

/// <summary>
/// ����� ��������� height
/// </summary>
/// <param name="height"></param>
/// <returns></returns>
bool Rectangle::set_height(const double& height) {
	if (height < 0)
		return false;

	this->height = height;

	return true;
}

/// <summary>
/// ����� ��������� weight
/// </summary>
/// <param name="height"></param>
/// <returns></returns>
bool Rectangle::set_width(const double& width) {
	if (width < 0)
		return false;

	this->width = width;

	return true;
}

/// <summary>
/// ����� to_string()
/// </summary>
/// <returns></returns>
std::string Rectangle::rect_to_string() const {
	return	"������ -> " + std::to_string(this->width) +
		"\n������-> " + std::to_string(this->height);
}
