#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiShikou.generated.h"

class UUIManager;

UCLASS(Blueprintable)
class AShogiShikou : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    AShogiShikou(const FObjectInitializer& ObjectInitializer);

};

