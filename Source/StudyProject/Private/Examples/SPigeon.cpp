// Fill out your copyright notice in the Description page of Project Settings.

#include "Examples/SPigeon.h"

USPigeon::USPigeon()
{
    Name = TEXT("SPigeonCDO");
    ID = 0;
}

void USPigeon::Serialize(FArchive& Ar)
{
    Super::Serialize(Ar); //�𸮾� �����ڵ��� �������

    Ar << Name;
    Ar << ID;
}
