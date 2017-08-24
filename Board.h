/* 
 * File:   Board.h
 * Author: Cameron
 *
 * Created on April 23, 2016, 4:12 PM
 */

#ifndef BOARD_H
#define	BOARD_H

#include <AVR++/IOpin.h>

namespace Board {
 extern AVR::IOpin A;
 extern AVR::IOpin B;
 extern AVR::IOpin C;

 extern AVR::IOpin Reset;

 extern AVR::IOpin Button;
};

#endif	/* BOARD_H */

