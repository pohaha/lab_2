#pragma once
enum REPLY
{
	WITH_REPLY, NO_REPLY
};
class rectangle
{
public:
	float m_width=0;
	float m_length=0;

	rectangle(const float& n_width, const float& n_length);
	rectangle(bool that=true);


	virtual void GetSize();
	virtual void GetDiag();
	virtual void GetPerimetr();
	virtual float GetSpace(REPLY hasReply);
};

