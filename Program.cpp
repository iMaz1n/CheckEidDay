//
//  Program.cpp
//  Check Eid Day with CPlusPlus
//
//  Created by Mazen Hrazi on 18/10/19 (Twitter: @iMaz1n).
//  Copyright © 2019 iZONA. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

void checkEidDay(string eidDate,string todayDate);

int main(int argc, char *argv[]) {
	char localDateStr[50];
	
	time_t current = time(0); // if you wanna Eid day put current = 1590338323;
	tm *localDate = localtime(&current);
	
	string eidDate = "2020/05/24"; // Next Eid day 
	
	strftime(localDateStr,50,"%Y/%m/%d",localDate);
	
	printf("Today is %s\n",localDateStr);
	checkEidDay(eidDate,localDateStr);
	
	return 0;
}

void checkEidDay(string eidDate,string todayDate){
	if (eidDate == todayDate)
	{
		printf("Happy Eid from iZONA 🖤🖤.\n");
	}
	else {
		printf("Ohh 😢 It's not Eid day 😞.\n");
	}
}