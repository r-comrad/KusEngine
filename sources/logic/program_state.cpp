#include "logic/program_state.hpp"

lgc::ProgramState::ProgramState() :
    mIsClosed   (false)
{}

lgc::ProgramState::~ProgramState()
{
    lgc::ObjectStorage::globalObjecStorage.clear();
}

void
lgc::ProgramState::close()
{
    mIsClosed = true;
}

void
lgc::ProgramState::stateSetup(boost::property_tree::ptree& aSettings)
{
    for(auto& it : aSettings)
    {
        if (it.first == "Layers") layerSetup(it.second);
    }
}

bool
lgc::ProgramState::isClosed()
{
    return mIsClosed;
}

void
lgc::ProgramState::timeUpdate()
{
    float dTime = Time::globalTime.updateTime();
    // float dTime = Time::globalTime.getdTime();

    auto objects = ObjectStorage::globalObjecStorage["logical"];
    if (objects) 
    {
        for(auto& ptr : objects.value())
        {
            dynamic_cast<LogicObject*> (ptr.get())->update(dTime);

        }
    }
}

void
lgc::ProgramState::layerSetup(boost::property_tree::ptree& aSettings)
{
    for(auto& it : aSettings)
    {
        layer_type num = boost::lexical_cast<int>(it.second.data());
        gui::GUI::addLayer(it.first, num);
    }
}
