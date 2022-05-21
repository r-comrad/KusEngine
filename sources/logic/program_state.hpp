#ifndef PROGRAM_STATE_H
#define PROGRAM_STATE_H

//--------------------------------------------------------------------------------

#include <set>

#include "gui/gui_event.hpp"
#include "gui/gui_drawable.hpp"
#include "gui/gui_types.hpp"

#include "logic_types.hpp"
#include "objects_storage.hpp"
#include "logic_object.hpp"

namespace lgc
{
	class ProgramState
	{
	public:
		ProgramState();
		virtual ~ProgramState() = default;

		//virtual bool run(std::vector<gui::Event*> aEvents) = 0;
		//virtual const SetDrawebleType* getPresentation() const = 0;
		virtual void processEvents(EventArray aEvents) = 0;
		virtual void update() = 0;
		void timeUpdate();
		
		bool isClosed();

	protected:
		void close();

	private:
		bool mIsClosed;
		//static Time mTime;
	};
}
	
//--------------------------------------------------------------------------------

#endif // !PROGRAM_STATE_H