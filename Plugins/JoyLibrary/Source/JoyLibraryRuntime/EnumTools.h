#pragma once

#include <CoreMinimal.h>

JOYLIBRARYRUNTIME_API UEnum* GetEnumType(const FString& _enumTypeName);

template<typename TEnum>
JOYLIBRARYRUNTIME_API FORCEINLINE FName EnumToName(const FName& _enumTypeName, TEnum _value)
{
	const UEnum* enumPtr = GetEnumType(_enumTypeName.ToString());
	if (!enumPtr)
	{
		return FName();
	}
	return enumPtr->GetNameByValue((int64)_value);
}

template<typename TEnum>
JOYLIBRARYRUNTIME_API FORCEINLINE FString EnumToDisplayName(const FName& _enumTypeName, TEnum _value)
{
	const UEnum* enumPtr = GetEnumType(_enumTypeName.ToString());
	if (!enumPtr)
	{
		return FString();
	}
	return enumPtr->GetDisplayNameTextByValue((int64)_value).ToString();
}

template <typename EnumType>
JOYLIBRARYRUNTIME_API FORCEINLINE EnumType NameToEnum(const FName& _enumTypeName, const FName& _name)
{
	UEnum* Enum = GetEnumType(_enumTypeName.ToString());
	if (!Enum)
	{
		return EnumType(0);
	}
	return (EnumType)Enum->GetIndexByName(_name);
}

JOYLIBRARYRUNTIME_API uint32 IncrementBitMask(const UEnum* _enum, uint32 _bitMask);

JOYLIBRARYRUNTIME_API FString GetBitMaskString(const UEnum* _enum, uint32 _bitMask);