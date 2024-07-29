#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionStage.generated.h"

class ALevelLoader;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UActionStage : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALevelLoader* LevelLoader;
    
public:
    UActionStage();

private:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded();
    
};

