#pragma once
#include "CoreMinimal.h"
#include "ActionBase.h"
#include "CActionMsgPicture.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ACActionMsgPicture : public AActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* mp_Picture[2];
    
public:
    ACActionMsgPicture(const FObjectInitializer& ObjectInitializer);

};

