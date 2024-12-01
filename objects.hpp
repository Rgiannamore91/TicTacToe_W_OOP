#include <iostream>
#include <vector>
#include <string>


class Field {
    std::vector<char> row1 = {' ',' ',' '};
    std::vector<char> row2 = {' ',' ',' '};
    std::vector<char> row3 = {' ',' ',' '};
    bool turn;
    bool gameStatus;
public:
    bool getTurn();
    void setTurn(bool setting);
    bool getGameStatus();
    void setGameStatus(bool setting);
    void updateSection (int rowNum, int idx);
    std::string getFieldDisplay();
};