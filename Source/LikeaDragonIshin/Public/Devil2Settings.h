#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Devil2Settings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class LIKEADRAGONISHIN_API UDevil2Settings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> CharaInfoAssets;
    
    UDevil2Settings();

};

