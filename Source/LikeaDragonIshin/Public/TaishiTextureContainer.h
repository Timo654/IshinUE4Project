#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TaishiTextureContainer.generated.h"

class UDataAsset_TaishiTextureTable;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UTaishiTextureContainer : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataAsset_TaishiTextureTable* m_TextureTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataAsset_TaishiTextureTable* m_BootTextureTable;
    
public:
    UTaishiTextureContainer();

};

