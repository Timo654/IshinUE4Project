#pragma once
#include "CoreMinimal.h"
#include "MacanUserWidget.h"
#include "MacanUserWidget_TaishiElem_LocationInfo.generated.h"

class UImage;
class UMacanTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_TaishiElem_LocationInfo : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanTextBlock* complete_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* sprite_place;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> location_map;
    
public:
    UMacanUserWidget_TaishiElem_LocationInfo();

};

