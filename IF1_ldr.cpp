#include <iostream>
#include <time.h>
using namespace std;

void time_delay(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main() {
	do {
		int IF1_ldr; int motor_pos = 8; int motor_neg = -8;
		cout << "\nIF1: "; cin >> IF1_ldr;
		if (IF1_ldr == 1) {
			cout << "\nmotor speed is " << motor_pos << "\n";
			time_delay(2.5);
			do {
				cout << "\nanswer: "; cin >> IF1_ldr;
			} while (IF1_ldr == 1);
			if (IF1_ldr == 0) {
				cout << "\nmotor speed is " << motor_neg << "\n";
				time_delay(2.5);
				return main();
			}
		}
	} while (true);
	return 0;
}
