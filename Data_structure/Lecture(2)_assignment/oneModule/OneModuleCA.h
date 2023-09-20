/*
 * OneModuleCA.h
 *
 *  Created on: 19 Sep 2023
 *      Author: hp
 */

#ifndef ONEMODULECA_H_
#define ONEMODULECA_H_

#define DPRINTF(...)    {fflush(stdout); \
						fflush(stdout); \
						printf(__VA_ARGS__); \
						fflush(stdout); \
						fflush(stdout);}

enum{
	CA_Waiting,
	CA_Driving
}CA_State;

void (*State)();

state_define(CA_Driving);
state_define(CA_Waiting);





#endif /* ONEMODULECA_H_ */
