// SPigeon.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SFlyable.h" // ��Ŭ��� ������ �׻� .generated.h ���� ���� �ۼ�.
#include "SPigeon.generated.h"

/**
 *
 */
UCLASS()
class STUDYPROJECT_API USPigeon
    : public UObject
    , public ISFlyable
{
    GENERATED_BODY()

public:
    USPigeon();
    const FString& GetName() const { return Name; }

    void SetName(const FString& InName) { Name = InName; }

    int32 GetID() const { return ID; }

    void SetID(int32 InID) { ID = InID; }

    virtual void Serialize(FArchive& Ar) override;

    virtual void Fly() override;

private:
    UPROPERTY()
    FString Name;

    UPROPERTY()
    int32 ID;
};
