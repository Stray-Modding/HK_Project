#pragma once
#include "CoreMinimal.h"
#include "EHangingTestResult.generated.h"

UENUM(BlueprintType)
enum EHangingTestResult {
    RailHangingTestResult_Rail,
    RailHangingTestResult_Hang,
    RailHangingTestResult_MAX UMETA(Hidden),
};

