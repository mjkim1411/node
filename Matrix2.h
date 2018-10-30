#pragma once

#include "stdafx.h"

struct Matrix2
{
public:
	float _11, _12;
	float _21, _22;

	Matrix2() : _11(1), _12(0), _21(0), _22(1) {}
	Matrix2(float In11, float In12, float In21, float In22) 
		: _11(In11), _12(In12), _21(In21), _22(In22) {}

public:

	void SetIdentity()
	{
		_11 = 1.0f;
		_12 = 0.0f;
		_21 = 0.0f;
		_22 = 1.0f;
	}

	void SetScale(float InX, float InY)
	{
		SetIdentity();
		_11 = InX;
		_22 = InY;
	}

	void SetRotation(float degree)
	{

	}
};