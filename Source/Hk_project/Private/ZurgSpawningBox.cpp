#include "ZurgSpawningBox.h"
#include "EditorTickComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

FVector AZurgSpawningBox::GetSuggestedSpawnVelocity() const {
    return FVector{};
}

FVector AZurgSpawningBox::GetRandomPointInBox() const {
    return FVector{};
}

void AZurgSpawningBox::_EditorTick(float _deltaTime) {
}

AZurgSpawningBox::AZurgSpawningBox() {
    this->m_spawnVelocity = 0.00f;
    this->m_drawDebug = false;
    this->m_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("m_rootComponent"));
    this->m_spawningBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("m_spawningBoxComponent"));
    this->m_spawningVelocityDirectionArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("m_spawningVelocityDirectionArrowComponent"));
    this->m_editorTickComponent = CreateDefaultSubobject<UEditorTickComponent>(TEXT("m_editorTickComponent"));
}

