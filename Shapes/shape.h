#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape 
{
private:
	float _area;
	float _perimeter;

public:
	Shape();
	virtual float get_area(bool has_depth = false) const = 0;

};

#endif	// __SHAPE_H__
