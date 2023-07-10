 /*
 * Name: Cameron Lawrence
 * Date Submitted: March 7
 * Lab Section: 003
 * Assignment Name: Hash Table
 */

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

struct point
{
    double x;
    double y;
};

/*Implement the following function
  Reads in a file specified by the parameter
  Format of file: #of points on first line
                  remaining (#of points) lines: x-value and y-value of point
                  one point per line
                  x-value and y-value are double-precision values and
                  bounded by the unit square 0.0 <= x,y < 1.0
  Should use "spatial hashing" where the #of cells scales with the #of points
  and find the distance between the closest pair of points which will be
  returned as a double type value
*/

double closestPair(string filename)
{
//ifstream to open up file and read in count
	ifstream inputFile(filename);
	int count;
	int count2;
	int count3;
	double small = 1.0;
	double length;
	inputFile >> count;
	int squareRoot = sqrt(count);
//creating vector for the square root
	vector<vector<vector<point>>> Pair(squareRoot, vector<vector<point>>(squareRoot));

	// Read in the points and put them in the cell table
	for (int a = 0; count > a; a++)
	{
		point point;
		//inputting from file points x and y as given above
		inputFile >> point.x >> point.y;
		//using squareRoot to help calculate closet pair
		Pair[(int)(point.x * squareRoot)] [(int)(point.y * squareRoot)].push_back(point);
	}

	// iterate through the cells in the cell table
	//variables are incrementing through numbers to keep track for for loops.... one, two, etc....
	for (int one = 0; squareRoot > one; one++)
	{
		for (int two = 0; squareRoot > two; two++)
		{
			vector<point> pairPoint = Pair[one][two]; //running through points
			for( int three = 0; pairPoint.size() > three; three++)
			{
				for (int four = -1; 1 >= four; four++) //when found do it around the same points
				{
					for (int five = -1; 1 >= five; five++)
					{
						//if the point is in the table
						if (one + four >= 0 && one + four < squareRoot && two + five >= 0 && two + five < squareRoot)
						{
							count2--;
							count3++;
							for (int six = 0; Pair[one + four][two + five].size() > six; six++)
							{
								//checking for the points to be the exact same, thats why they are double for extra #'s
								if (pairPoint[three].x != Pair[one + four][two + five][six].x || pairPoint[three].y != Pair[one + four][two + five][six].y)
								{
									count2++;
									//double variable for length to see which is the closest to one another
								    length = sqrt(pow (pairPoint[three].x - Pair[one + four][two + five][six].x, 2) + pow (pairPoint[three].y - Pair[one +  four][two + five][six].y,2));
									count3--;
									if (small > length)
									{
										small = length;
									}
									if (count3 == count2) {
										cout << "not gonna pass test cases" << endl;
									}

	}
	}
    }
	}
	}
	}
	}
	}
//all these parentheses in color order just look cool!
	return small;
}

//main
/*int main()
{
    double min;
    string filename;
    cout << "File with list of points within unit square: ";
    cin >> filename;
    min = closestPair(filename);
    cout << setprecision(16);
    cout << "Distance between closest pair of points: " << min << endl;
    return 0;
}*/