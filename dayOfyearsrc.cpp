#include <iostream>
#include <vector>

using namespace std;


class Day0fYear {

public:

	int day;
	int selectedDay;

	int jan = 31; 
	int feb = 28; 
	int mar = 31; 
	int apr = 30; 
	int may = 31; 
	int jun = 30; 
	int jul = 31; 
	int aug = 31;
	int sept = 30; 
	int oct = 31; 
	int nov = 30; 
	int dec = 31;

	Day0fYear(int Day) {
	
		day = Day;

	}

	void calculateNprint() {

		//January
		if (day <= 31) {

			cout << "January " << day;
		}

		//February
		if (day >= 32 && day <= 59) {

			cout << "February " << day - jan;
		}

		//March
		if (day >= 60 && day <= 90) {

			cout << "March " << day - (jan + feb);
		}

		//April
		if (day >= 91 && day <= 120) {

			cout << "April " << day - (jan + feb + mar);
		}
		
		//May
		if (day >= 121 && day <= 151) {
		
			cout << "May " << day - (jan + feb + mar + apr);
		
		}

		//June
		if (day >= 152 && day <= 181) {

			cout << "June " << day - (jan + feb + mar + apr + may);

		}

		//July 
		if (day >= 182 && day <= 212) {

			cout << "July " << day - (jan + feb + mar + apr + may + jun);
		}

		//August 
		if (day >= 213 && day <= 243) {

			cout << "August " << day - (jan + feb + mar + apr + may + jun + jul);

		}

		//September
		if (day >= 244 && day <= 273) {

			cout << "September " << day - (jan + feb + mar + apr + may + jun + jul + aug);

		}

		//October
		if (day >= 274 && day <= 304) {

			cout << "October " << day - (jan + feb + mar + apr + may + jun + jul + aug + sept);

		}

		//November
		if (day >= 305 && day <= 334) {

			cout << "November " << day - (jan + feb + mar + apr + may + jun + jul + aug + sept + oct);

		}
		//December
		if (day >= 335 && day <= 365) {

			cout << "December " << day - (jan + feb + mar + apr + may + jun + jul + aug + sept + oct + nov);

		}

	}

};


int main() {

	int theDay;

	cout << "Please enter in day of the year: " << endl;

	cin >> theDay;

	Day0fYear dayyear(theDay);
	dayyear.calculateNprint();
	










};