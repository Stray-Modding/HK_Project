#include "LevelStreamInstanceInfo.h"

FLevelStreamInstanceInfo::FLevelStreamInstanceInfo() {
    this->bShouldBeLoaded = false;
    this->bShouldBeVisible = false;
    this->bShouldBlockOnLoad = false;
    this->LODIndex = 0;
}

