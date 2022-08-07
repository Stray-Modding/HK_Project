#include "FurSplines.h"

UFurSplines::UFurSplines(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    Threshold = 0.1f;
}

void UFurSplines::UpdateSplines()
{
    if (Version != 2)
    {
        if (Version == 0)
        {
            for (auto& v : Vertices)
                v.Y = -v.Y;
        }

        int32 Cnt = Count[0];
        for (int32 i = 1; i < Count.Num(); i++)
        {
            if (Count[i] != Cnt)
            {
                int32 Max = Cnt;
                for (; i < Count.Num(); i++)
                {
                    Max = FMath::Max(Max, Count[i]);
                }
                ConvertToUniformControlPointCount(Max);
                Cnt = Max;
                break;
            }
        }
        ControlPointCount = Cnt;

        Version = 2;
    }
}

void UFurSplines::ConvertToUniformControlPointCount(int32 NumControlPoints)
{
    TArray<FVector> Temp;
    Temp.AddUninitialized(NumControlPoints * Index.Num());
    int32 Idx = 0;
    float MaxControlPoint = (float)(NumControlPoints - 1);
    for (int32 i = 0; i < Index.Num(); i++)
    {
        int32 c = Count[i];
        if (c == NumControlPoints)
        {
            for (int32 j = Index[i], e = Index[i] + c; j < e; j++)
                Temp[Idx++] = Vertices[j];
        }
        else
        {
            int32 Offset = Index[i];
            for (int32 j = 0; j < NumControlPoints; j++)
            {
                float f = ((float)j / MaxControlPoint) * (float)(c - 1);
                int32 floor = FMath::FloorToInt(f);
                int32 ceil = FMath::CeilToInt(f);
                float r = f - floor;
                FVector v0 = Vertices[floor + Offset];
                FVector v1 = Vertices[ceil + Offset];
                Temp[Idx++] = v0 * (1.0f - r) + v1 * r;
            }
        }
    }
    check(Idx == Temp.Num());
    Temp.RemoveAt(Idx, Temp.Num() - Idx, true);
    Index.SetNum(0);
    Count.SetNum(0);
    Vertices = Temp;
}