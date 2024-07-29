#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "TaishiCardListId.h"
#include "DataAsset_TaishiTextureTable.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDataAsset_TaishiTextureTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FTaishiCardListId, FSoftObjectPath> Table_;
    
    UDataAsset_TaishiTextureTable();

};

