/*
* Copyright (c) <2021> Side Effects Software Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2. The name of Side Effects Software may not be used to endorse or
*    promote products derived from this software without specific prior
*    written permission.
*
* THIS SOFTWARE IS PROVIDED BY SIDE EFFECTS SOFTWARE "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
* NO EVENT SHALL SIDE EFFECTS SOFTWARE BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include <string>
#include "HoudiniApi.h"

class FText;
class FString;
class FName;

class HOUDINIENGINE_API FHoudiniEngineString
{
	public:

		FHoudiniEngineString();
		FHoudiniEngineString(int32 InStringId);
		FHoudiniEngineString(const FHoudiniEngineString & Other);

		FHoudiniEngineString & operator=(const FHoudiniEngineString & Other);

		bool operator==(const FHoudiniEngineString & Other) const;
		bool operator!=(const FHoudiniEngineString & Other) const;

		// Conversion functions
		bool ToStdString(std::string & String) const;
		bool ToFName(FName & Name) const;
		bool ToFString(FString & String) const;
		bool ToFText(FText & Text) const;
		
		// Static converters
		static bool ToStdString(const int32& InStringId, std::string & String);
		static bool ToFName(const int32& InStringId, FName & Name);
		static bool ToFString(const int32& InStringId, FString & String);
		static bool ToFText(const int32& InStringId, FText & Text);

		// Array converter, uses a map to avoid redudant calls to HAPI
		static bool SHArrayToFStringArray(const TArray<int32>& InStringIdArray, TArray<FString>& OutStringArray);

		// Array converter, uses string batches and a map to reduce HAPI calls
		static bool SHArrayToFStringArray_Batch(const TArray<int32>& InStringIdArray, TArray<FString>& OutStringArray);
		
		// Array converter, uses a map to reduce HAPI calls
		static bool SHArrayToFStringArray_Singles(const TArray<int32>& InStringIdArray, TArray<FString>& OutStringArray);

		// Return id of this string.
		int32 GetId() const;

		// Return true if this string has a valid id.
		bool HasValidId() const;

	protected:

		// Id of the underlying Houdini Engine string.
		int32 StringId;
};
