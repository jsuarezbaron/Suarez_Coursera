/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief stats.h contains a set of functions declaration to to prints the statistics of an array :
 * array, minimum, maximum, mean, median and sort  array.
 * @author <Juan Carlos Suárez Barón>
 * @dat01702/11/2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
*@brief Prints the statistics of an array : array, minimum, maximum, mean, median and sort array.
*A function that prints the statistics of an array including minimum, maximum, mean, and median.
*@param array The array to be printed to the screen.
*@param length The lenght or quantity elements of the array.
*@return void
*/
void print_statistics(unsigned char *array, unsigned int length);

/**
*@brief  Function to print the array to the screen. 
*
*This function takes an array of data and a length, prints the array to the screen.
*@param array The array to be printed to the screen.
*@param length The lenght or quantity elements of the array.
*@return void
*/
void print_array(unsigned char *array, unsigned  int length);

/**
*@brief Function to calculate the median value of a array.
*Given an array of data and a length, returns the median value.
*@param array The array of data.
*@param length The lenght or quantity elements of the array.
*@return void
*/
float find_median(unsigned char *array, unsigned  int length);

/**
*@brief Function to calculate the meean value of a array.
*Given an array of data and a length, returns the mean.
*@param array The array of data.
*@param length The lenght or quantity elements of the array.
*@return median value
*/
float find_mean(unsigned char *array, unsigned  int length);

/**
*@brief Function to find the maximun element of an array.
*Given an array of data and a length, returns the maximum.
*@param array The array of data.
*@param length The lenght or quantity elements of the array.
*@return maximum value
*/
int find_maximum(unsigned char *array, unsigned  int length);

/**
*@brief Function to find the minimun element of an array
*Given an array of data and a length, returns the minimum. 
*@param array The array of data.
*@param length The lenght or quantity elements of the array.
*@return minimum value
*/
int find_minimum(unsigned char *array, unsigned  int length);

/**
*@brief  Given an array of data and a length, sorts the array from largest to smallest. 
*		(The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
*@param array The array of data.
*@param length The lenght or quantity elements of the array.
*
*@return void
*/
void sort_array(unsigned char *array, unsigned  int length);
#endif /* __STATS_H__ */
