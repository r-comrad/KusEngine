#ifndef PROGRAM_STATE_H
#define PROGRAM_STATE_H

//--------------------------------------------------------------------------------

#include <set>

#include "gui/gui_event.hpp"
#include "gui/gui_drawable.hpp"
#include "gui/gui_types.hpp"

#include "log_types.hpp"

namespace lgc
{
	class ProgramState
	{
	public:
		ProgramState() = default;
		virtual ~ProgramState() = default;

		//virtual bool run(std::vector<gui::Event*> aEvents) = 0;
		virtual const SetDrawebleType* getPresentation() const = 0;
		virtual void processEvents(EventArray aEvents) = 0;
		virtual void update() = 0;
	};
}
	
//--------------------------------------------------------------------------------

#endif // !PROGRAM_STATE_H