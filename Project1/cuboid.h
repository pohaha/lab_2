#pragma once
#include "rectangle.h"
class cuboid :
    public rectangle
{
public:
    float m_height;


    cuboid(const float& n_width, const float& n_length, const float& n_height);
    cuboid(bool that=true);

    float GetVolume();

    virtual void GetSize() override;
    virtual void GetDiag() override;
    virtual void GetPerimetr() override;
    virtual float GetSpace(REPLY HasReply) override;
};

