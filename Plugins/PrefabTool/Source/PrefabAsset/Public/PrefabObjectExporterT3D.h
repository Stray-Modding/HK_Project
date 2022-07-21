#pragma once
#include "CoreMinimal.h"
#include "PrefabExporter.h"
#include "PrefabObjectExporterT3D.generated.h"

UCLASS(Blueprintable, NonTransient)
class PREFABASSET_API UPrefabObjectExporterT3D : public UPrefabExporter {
    GENERATED_BODY()
public:
    UPrefabObjectExporterT3D();
};

