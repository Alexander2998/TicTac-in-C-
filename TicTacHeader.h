/*
 * TacTacHeader.h
 *
 *  Created on: Feb 21, 2019
 *      Author: jtch9
 */

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_


bool Checkin(int input);
void TicTacBoard(char PlayerMarker,char ComMarker);
bool CheckSpace(int input,char PlayerMarker,char ComMarker);
void Winner(char PlayerMarker,char ComMarker);
void PositionAssignment(char PlayerMarker,char ComMarker);
void Game(char PlayerMarker,char ComMarker);
void FlipCoin(char PlayerMarker,char ComMarker);

extern char one; //value of each position
extern char two;
extern char three;
extern char four;
extern char five;
extern char six;
extern char seven;
extern char eight;
extern char nine;
extern int gameOver; //control the Game loop
extern bool use1; //see if position is occupied
extern bool use2;
extern bool use3;
extern bool use4;
extern bool use5;
extern bool use6;
extern bool use7;
extern bool use8;
extern bool use9;

#endif /* TICTACHEADER_H_ */
