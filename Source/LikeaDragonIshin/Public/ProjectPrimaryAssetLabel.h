#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetManagerTypes.h"
#include "Engine/DataAsset.h"
#include "ProjectPrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UProjectPrimaryAssetLabel : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetType AssetType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetRules Rules;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bLabelAssetsInMyDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> IncludeRegularExpressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExcludeRegularExpressions;
    
    UProjectPrimaryAssetLabel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIdentifierString() const;
    
};

