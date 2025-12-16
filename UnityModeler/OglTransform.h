#pragma once
#include "Vector3.h"

enum class GameObjType
{
	NULL_DEF = 0, SPHERE, CUBE ,CYLINDER, QUAD, TRI, PLANE, OBJ
};

//게임오브젝트  color, transform
class OglTransform
{
public:
	OglTransform(void);

	void SetDef(void);

	void Translate(void) const;
	void Rotate(void) const;
	void Scale(void) const;
	void Transform(void) const;

//protected:
	GameObjType m_nType;
	COLORREF m_nColor;
	GLfloat m_alpha;

	Vector3 m_translate;  // 병진 : 유닛
	Vector3 m_rotate;	  // 회전 : 각도 
	Vector3 m_scale;      // 배율 : 비율


};

