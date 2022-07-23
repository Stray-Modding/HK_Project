#include "EnumTools.h"


UEnum* GetEnumType(const FString& _enumTypeName)
{
	return FindObject<UEnum>(ANY_PACKAGE, *_enumTypeName, true);
}

uint32 IncrementBitMask(const UEnum* _enum, uint32 _bitMask)
{
	int32 enumSize = _enum->NumEnums() - 1; // NOTE: Unreal automatically adds a MAX value to the enum, so it will have 1 more element than expected.

	if (_bitMask == (1 << enumSize) - 1)
	{
		_bitMask = 0;
	}
	else
	{
		for (int i = 0; i < enumSize; ++i)
		{
			if ((_bitMask & (1 << i)) == 0)
			{
				_bitMask |= 1 << i;
				break;
			}
		}
	}
	return _bitMask;
}

FString GetBitMaskString(const UEnum* _enum, uint32 _bitMask)
{
	int32 enumSize = _enum->NumEnums() - 1; // NOTE: Unreal automatically adds a MAX value to the enum, so it will have 1 more element than expected.

	FString flags;
	for (int i = 0; i < enumSize; ++i)
	{
		if (_bitMask & (1 << i))
		{
			if (flags.Len() != 0)
				flags += " | ";

			flags += _enum->GetDisplayNameTextByValue(int64(1ll << i)).ToString();
		}
	}

	if (flags.Len() == 0)
		flags = "None";

	return flags;
}
