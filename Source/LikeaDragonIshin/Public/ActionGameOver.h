#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "ActionGameOver.generated.h"

class UMacanUIDataGameOver;

UCLASS(Blueprintable)
class UActionGameOver : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMacanUIDataGameOver* m_gameover;
    
public:
    UActionGameOver();

};

