#include "DebugMenuEntry.h"

class UDebugMenuEntry;

void UDebugMenuEntry::Update() {
}

UDebugMenuEntry* UDebugMenuEntry::GetParent() const {
    return NULL;
}

TArray<UDebugMenuEntry*> UDebugMenuEntry::GetChildren() const {
    return TArray<UDebugMenuEntry*>();
}

void UDebugMenuEntry::ClearAllChildren() {
}

void UDebugMenuEntry::AddChild(UDebugMenuEntry* _child) {
}

UDebugMenuEntry::UDebugMenuEntry() {
    this->m_parent = NULL;
}

