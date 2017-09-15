#include "stdafx.h"
#include <iostream>

int get_next_number(int grade)
{
	int next = grade;
	while (next % 5 != 0)
	{
		next++;
	}
	return next;
}

int do_round(int grade, int next)
{
	if (next - grade <= 4)
	{
		return grade;
	}
	return next;
}

bool can_round(int grade, int dividedor)
{
	if(grade % dividedor == 0)
	{
		return false;
	}
	return true;
}

int round(int grade)
{
	const int next = get_next_number(grade);
	grade = do_round(grade, next);
	return grade;
}

int main()
{
	int my_grades[10] = { 100, 35, 14, 33, 99, 55, 78, 10, 58, 60 };
	for(int i = 0; i < 10; i++)
	{
		int grade = my_grades[i];
		if(grade > 40 && can_round(grade, 5))
		{
			grade = round(grade);
		}
		std::cout << grade << std::endl;
	}
	return 0;
}
