#include "StreamingUnit.h"

void UStreamingUnit::_OnLevelStreamingUnloaded() {
}

void UStreamingUnit::_OnLevelStreamingLoaded() {
}

UStreamingUnit::UStreamingUnit() {
    this->m_streamingGroup = NULL;
    this->m_levelStreaming = NULL;
}

