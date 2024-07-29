#pragma once
#include "CoreMinimal.h"
#include "Components/InvalidationBox.h"
#include "MacanInvalidationBox.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UMacanInvalidationBox : public UInvalidationBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCacheNotifaication;
    
    UMacanInvalidationBox();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateInvalidationBoxCacheFlag(bool inCanCache);
    
};

