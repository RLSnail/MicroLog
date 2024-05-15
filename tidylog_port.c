#include "tidylog_port.h"

/**
 * @brief This file contains some interface functions which coupled to the platform
 * you used. The interface function `__tidylog_output` is required to implement, but
 * the others are not mandatory to finish.
*/

/**
 * @attention REQUIRED to implement!!
 * @brief TidyLog will call this function when some infomation need to output.
 * @arg content: A string pointer, points to the text will be output.
 * @arg len: A integer indecates how many char will be output, including '\0'.
*/
void __tidylog_output(char* content, unsigned long long len) {

}