#include <iostream>
#include <string>
#include <vector>
#include <format>
#include "objects.hpp"

// Gameplay


// Field Members
bool Field::getTurn() {
    return turn;
}
void Field::setTurn(bool setting) {
    turn = setting;
}
bool Field::getGameStatus() {
    return gameStatus;
}
void Field::setGameStatus(bool setting) {
    gameStatus = setting;
}
void Field::updateSection(int rowNum, int idx) {
    char x_or_o;
    if (turn) {
        x_or_o = 'x';
    }
    else {
        x_or_o = 'o';
    }

    switch (rowNum) {
    case 1:
        row1[idx] = x_or_o;
        break;
    case 2:
        row2[idx] = x_or_o;
        break;
    case 3:
        row3[idx] = x_or_o;
        break;
    }
}
std::string Field::getFieldDisplay() {
    std::string rowOneDisplay = std::format(" {} | {} | {} \n", row1[0], row1[1], row1[2]);
    std::string rowTwoDisplay = std::format(" {} | {} | {} \n", row2[0], row2[1], row2[2]);
    std::string rowThreeDisplay = std::format(" {} | {} | {} \n", row3[0], row3[1], row3[2]);
    std::string fieldDisplay = rowOneDisplay + rowTwoDisplay + rowThreeDisplay;
    return fieldDisplay;
}