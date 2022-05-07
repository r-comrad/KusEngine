#ifndef PROGRAM_STATE_H
#define PROGRAM_STATE_H

//--------------------------------------------------------------------------------

#include <set>

#include "core/domain.hpp"
#include "events/event.hpp"
#include "gui/drawable.hpp"

#define SET_DRAWEBLE_TYPE std::set<sr::GuiOutputBase*, sr::GuiOutputBaseComparator>

namespace sr
{
	class ProgramState
	{
	public:
		ProgramState();
		virtual ~ProgramState();

		virtual bool run(std::vector<Event*> aEvents) = 0;
		virtual
			const SET_DRAWEBLE_TYPE*
			getPresentation() const = 0;
	};
}

//--------------------------------------------------------------------------------

#endif // !PROGRAM_STATE_H