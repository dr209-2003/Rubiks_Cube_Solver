//
// Created by dhrur on 24-06-2024.
//

#include "RubiksCube.h"

//
//Given a color return it's first letter
//

char RubiksCube::getColorLetter(COLOR color) {
    switch (color) {
        case COLOR::BLUE:
            return 'B';
        case COLOR::GREEN:
            return 'G';
        case COLOR::RED:
            return 'R';
        case COLOR::YELLOW:
            return 'Y';
        case COLOR::WHITE:
            return 'W';
        case COLOR::ORANGE:
            return 'O';
    }
}

/*
 * Describe a move using an index
 */
string RubiksCube::getMove(MOVE ind) {
    switch (ind) {
        case MOVE::L:
            return "L";
        case MOVE::LPRIME:
            return "L'";
        case MOVE::L2:
            return "L2";
        case MOVE::R:
            return "R";
        case MOVE::RPRIME:
            return "R'";
        case MOVE::R2:
            return "R2";
        case MOVE::U:
            return "U";
        case MOVE::UPRIME:
            return "U'";
        case MOVE::U2:
            return "U2";
        case MOVE::D:
            return "D";
        case MOVE::DPRIME:
            return "D'";
        case MOVE::D2:
            return "D2";
        case MOVE::F:
            return "F";
        case MOVE::FPRIME:
            return "F'";
        case MOVE::F2:
            return "F2";
        case MOVE::B:
            return "B";
        case MOVE::BPRIME:
            return "B'";
        case MOVE::B2:
            return "B2";
    }
}