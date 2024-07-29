#pragma once
#include "CoreMinimal.h"
#include "DiEventParamComponent.h"
#include "DiEventParams_SlashWound.h"
#include "DVPrC_SlashWound.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIKEADRAGONISHIN_API UDVPrC_SlashWound : public UDiEventParamComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiEventParams_SlashWound Param;
    
    UDVPrC_SlashWound(const FObjectInitializer& ObjectInitializer);

};

