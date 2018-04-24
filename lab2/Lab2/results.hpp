#pragma once

#ifndef _RESULTS_H
#define _RESULTS_H

#include <vector>    // vector<T>
#include <iostream>  // ostream
#include <limits>    // numeric_limits

/// <summary>Storage class for results.</summary>
class results_t
{
public:
	// Public Functions:
	/// <summary>Default Constructor.</summary>
	results_t(void)
	{
		d_avgTime = d_bestValue = std::numeric_limits<double>::max();
		ui_functionCalls = 0;
		bestValues = nullptr;
		data = nullptr;
	} // end Constructor

	// Operators:
	/// <summary>Stream insertion operator. Inserts the contents of this object into the output stream object <paramref name="stream"/>.</summary>
	/// <param name="stream">The stream into which this object's string representation will be inserted.</param>
	/// <param name="res">A results_t object containing some data; this object can be invalid.</param>
	/// <returns>The stream passed in <paramref name="stream"/> with this object's contents in it.</returns>
	friend std::ostream& operator<<(std::ostream& stream, results_t& res);

	// Public Data Members:
	/// <summary>Average time of function execution.</summary>
	double	d_avgTime,

	/// <summary>Best value found during test.</summary>
			d_bestValue;

	/// <summary>Stores # of function calls made.</summary>
	std::size_t ui_functionCalls;

	/// <summary>Best input vector found.</summary>
	std::vector<double>* bestValues;

	/// <summary>All data points.</summary>
	std::vector<double>* data;
}; // end class results_t

#endif