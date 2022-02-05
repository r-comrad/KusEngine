#ifndef CORE_H
#define CORE_H

//--------------------------------------------------------------------------------

#include <iostream>

#include "gui.hpp"
#include "program_state.hpp"
#include "game.hpp"
#include "my_time.hpp"

class Core
{
public:
	Core();
	~Core();

	void run();

private:
	GUI mView;

	ProgramState* mCurrentState;
};

//--------------------------------------------------------------------------------

#endif // CORE_H