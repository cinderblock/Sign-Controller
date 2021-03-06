/* 
 * File:   Board.cpp
 * Author: Cameron
 * 
 * Created on April 23, 2016, 4:12 PM
 */

#include "Board.h"

#include <avr/io.h>

AVR::IOpin Board::A(&PORTC, 6);
AVR::IOpin Board::B(&PORTC, 5);
AVR::IOpin Board::C(&PORTC, 4);

AVR::IOpin Board::Double(&PORTD, 0);

AVR::IOpin Board::Reset(&PORTD, 0);

AVR::IOpin Board::Button(&PORTC, 1);