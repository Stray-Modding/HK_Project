#include "LevelScript.h"
#include "SaveComponent.h"

class UStreamingGroup;


void ALevelScript::_OnStreamingGroupSaveLoaded(UStreamingGroup* _streamingGroup) {
}

ALevelScript::ALevelScript() {
    this->m_saveComponent = CreateDefaultSubobject<USaveComponent>(TEXT("SaveComponent"));
}

