#pragma once
#include "CoreMinimal.h"
#include "Exporters/Exporter.h"
#include "PrefabExporter.generated.h"

UCLASS(Blueprintable, NonTransient)
class PREFABASSET_API UPrefabExporter : public UExporter {
    GENERATED_BODY()
public:
    UPrefabExporter();
};

