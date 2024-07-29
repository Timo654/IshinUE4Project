#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CueSheetObject.generated.h"

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UCueSheetObject : public UObject {
    GENERATED_BODY()
public:
    UCueSheetObject();

    UFUNCTION(BlueprintCallable)
    void Unload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
};

