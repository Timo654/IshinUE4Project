#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_AfterImage.generated.h"

class UEffectAfterImageComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_AfterImage : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectAfterImageComponent* AfterImage;
    
public:
    UDVEPl_AfterImage();

};

