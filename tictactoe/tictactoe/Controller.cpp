#include "Conrtoller.h"

controller::controller(){

}
controller::controller(int stat, int num){
	cellStatus = stat;
	gameCount = num;
}

bool controller::getStart(){
	return gameStart;
}
void controller::setStart(bool new_game){
	gameStart = new_game;
}

int controller::getStat(){
	return cellStatus;
}
void controller::setStat(int stat){
	cellStatus = stat;
}

int controller::getCount(){
	return gameCount;
}
void controller::setCount(int num){
	gameCount = gameCount + num;
}

int controller::getType(){
	return gameType;
}
void controller::setType(int type){
	gameType = type;
}