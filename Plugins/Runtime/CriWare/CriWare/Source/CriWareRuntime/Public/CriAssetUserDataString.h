#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "CriAssetUserDataString.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API UCriAssetUserDataString : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UCriAssetUserDataString();

};

