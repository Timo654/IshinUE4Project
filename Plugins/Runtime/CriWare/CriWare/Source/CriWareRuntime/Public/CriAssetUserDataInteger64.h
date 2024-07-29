#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "CriAssetUserDataInteger64.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API UCriAssetUserDataInteger64 : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    UCriAssetUserDataInteger64();

};

