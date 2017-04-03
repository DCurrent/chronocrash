#include "axis.h"

// cc_axis_main implementation.
// Caskey, Damon V.
// 2016-02-25

// Accessors
float cc_axis_main::get_x() const
{
	return x_m;
}

float cc_axis_main::get_y() const
{
	return y_m;
}

float cc_axis_main::get_z() const
{
	return z_m;
}

// Mutators
void cc_axis_main::set_x(float value)
{
	x_m = value;
}

void cc_axis_main::set_y(float value)
{
	y_m = value;
}

void cc_axis_main::set_z(float value)
{
    z_m = value;
}
