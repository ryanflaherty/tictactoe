#pragma once

ref class controller{

private:
	bool gameStart;
	int cellStatus;
	int gameType;			//1 for human  2 for cpu

	int gameCount;

public:
	controller();
	controller(int, int);
	bool getStart();
	void setStart(bool);

	int getStat();
	void setStat(int);

	int getCount();
	void setCount(int);

	int getType();
	void setType(int);
};