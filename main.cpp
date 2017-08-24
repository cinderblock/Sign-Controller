/* 
 * File:   main.cpp
 * Author: Cameron
 * 
 * Created on April 23, 2016, 4:12 PM
 */

#include "Board.h"
#include "SoftwarePWM.h"
#include "Display.h"

#include <avr/io.h>
#include <util/delay.h>

#include <math.h>

unsigned int delay = 500;

void digit(u1 i) {
    Display::writePixel(i, 255);

    Display::latch();
    _delay_ms(delay);
    Display::writePixel(i, 0);
    Display::latch();
}

void main() {

  Board::A.off();
  Board::B.off();
  Board::C.off();

  Board::A.output();
  Board::B.output();
  Board::C.output();
  Board::C.on();

  Board::Button.on();

  SoftwarePWM::init();


  u2 j = 0;
  while (0) {
    _delay_ms(10);
    for (u1 i = 0; i < Display::numPixels; i++) {
      Display::writePixel(i, (sin(i / 3. - j / 10.) + 1) / 2 * 255);
    }

    Display::latch();

    j++;
  }


  while (1) {
    Board::Double = Board::Button.isHigh();

    _delay_ms(1000);
    Board::C.on();

    digit( 0);
    digit( 1);
    digit( 2);
    digit( 3);
    digit( 4);
    digit( 5);
    digit( 6);
    digit( 7);
    digit( 8);
    digit( 9);
    digit(10);
    digit(11);
    digit(12);
    digit(13);
    digit(14);
    digit(15);

    Board::C.off();
  }
}