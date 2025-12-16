#include "pch.h"
#include "OglTransform.h"

OglTransform::OglTransform(void)
{
	SetDef();
}

void OglTransform::SetDef(void)
{
	m_nType = GameObjType::NULL_DEF;
	m_nColor = RGB(0, 0, 0);
	m_alpha = 1.0f;
	m_translate = Vector3(0.0f, 0.0f, 0.0f);
	m_rotate = Vector3(0.0f, 0.0f, 0.0f);
	m_scale = Vector3(1.0f, 1.0f, 1.0f);
}

void OglTransform::Translate(void) const
{
	glTranslatef(m_translate.x, m_translate.y, m_translate.z);
}

void OglTransform::Rotate(void) const
{
	glRotatef(m_rotate.x, 1.0f, 0.0f, 0.0f);	// x축 기준 회전
	glRotatef(m_rotate.y, 0.0f, 1.0f, 0.0f);	// y축 기준 회전
	glRotatef(m_rotate.z, 0.0f, 0.0f, 1.0f);	// z축 기준 회전

}

void OglTransform::Scale(void) const
{
	glScalef(m_scale.x, m_scale.y, m_scale.z);
}

void OglTransform::Transform(void) const
{
	Rotate();
	Translate();
	Scale();
}
