/*
*    Semi-accurate physics simulator (SAPS)
*
*    Copyright (C) 2014 Michael Davenport <Davenport.physics@gmail.com>
*
*
*   Permission is hereby granted, free of charge, to any person 
*   obtaining a copy of this software and associated documentation 
*   files (the "Software"), to deal in the Software without 
*   restriction, including without limitation the rights to use, 
*   copy, modify, merge, publish, distribute, sublicense, and/or 
*   sell copies of the Software, and to permit persons to whom 
*   the Software is furnished to do so, subject to the following 
*   conditions:
*
*   The above copyright notice and this permission notice shall be 
*   included in all copies or substantial portions of the Software.
*
*   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
*   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
*   OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
*   NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
*   HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
*   WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
*   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR 
*   OTHER DEALINGS IN THE SOFTWARE.
*
*/


#include "electric.h"

double force_kqqR2(double q, double Q, double radius) {
	
	if ( radius != 0 )
		return ( ( COULOMBS_CONSTANT * q * Q )/( radius * radius ) );
	else
		return 0;

}

double electric_field_kqR2(double q , double radius) {
	
	if ( radius != 0 )
		return (COULOMBS_CONSTANT * q)/(radius * radius);
	else
		return 0;

}

double summation_electric_field(double q, double radius) {
	
	if ( radius != 0 )
		return (q) / (radius * radius);
	else
		return 0;

}

double potential_kqR( double q , double radius) {
	
	if ( radius != 0)
		return ( ( COULOMBS_CONSTANT * q ) / fabs( radius ) );
	else
		return 0;
	
}

__attribute__ ((hot)) double summation_potential( double q , double radius ) {
	
	if ( radius != 0 )
		return ( q / fabs( radius ) );
	else
		return 0;
	
}
