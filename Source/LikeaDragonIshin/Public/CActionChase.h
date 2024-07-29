#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "CActionChase.generated.h"

class UMacanUserWidget_ChaseCaption;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UCActionChase : public UActionObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMacanUserWidget_ChaseCaption* m_pCseManager;
    
public:
    UCActionChase();

};

