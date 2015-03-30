#pragma once;

ref class game
{
private:
	int Space00 = 0;
	int Space01 = 0;
	int Space02 = 0;
	int Space10 = 0;
	int Space11 = 0;
	int Space12 = 0;
	int Space20 = 0;
	int Space21 = 0;
	int Space22 = 0;
	int Counter = 1;

public:
	int get_Space00();
	int get_Space01();
	int get_Space02();
	int get_Space10();
	int get_Space11();
	int get_Space12();
	int get_Space20();
	int get_Space21();
	int get_Space22();
	int get_Counter();

	void set_Counter(int);
	/* void set_Space00(int);
	void set_Space01(int);
	void set_Space02(int);
	void set_Space10(int);
	void set_Space11(int);
	void set_Space12(int);
	void set_Space20(int);
	void set_Space21(int);
	void set_Space22(int); */
};