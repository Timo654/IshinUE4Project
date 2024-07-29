#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "MacanUIEngineSubsystem.generated.h"

class UDataAsset;
class UDataTable;

UCLASS(Blueprintable)
class UMacanUIEngineSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pDataTableRichTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pDataTableRichTextImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataAsset* m_pDataAssetUIColorPreset;
    
public:
    UMacanUIEngineSubsystem();

};

