#pragma once
#include "CoreMinimal.h"
#include "ActionMinigame.h"
#include "ActionShogiObject.generated.h"

class AShogiManager;

UCLASS(Blueprintable)
class UActionShogiObject : public UActionMinigame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiManager* shogi_manager;
    
public:
    UActionShogiObject();

    UFUNCTION(BlueprintCallable)
    AShogiManager* GetShogiManager();
    
};

