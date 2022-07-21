#include "JoyGameInstance.h"
#include "Templates/SubclassOf.h"

class AManager;
class UObject;
class UCurveFloat;

AManager* UJoyGameInstance::GetManager(TSubclassOf<AManager> _managerClass, UObject* _worldContextObject) const {
    return NULL;
}

void UJoyGameInstance::DrawDebugCurve(UCurveFloat* _curve, TEnumAsByte<ECoordinatesOrigin> _coordinatesOrigin, FVector2D _position, FVector2D _size, float _curveXMin, float _curveXMax, float _curveValue, const FString& _curveName, FColor _curveColor, FColor _valueColor, int32 _samplesCount) {
}

UJoyGameInstance::UJoyGameInstance() {
}

