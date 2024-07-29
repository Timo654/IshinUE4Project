#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "DiEventSequenceActor.generated.h"

class AAuthSeqActor;
class UDVPrC_CutPoint;
class UDiEventElementPlayComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API ADiEventSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDVPrC_CutPoint* m_CutPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDiEventElementPlayComponent*> m_ElementTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAuthSeqActor* m_authSeqActor;
    
public:
    ADiEventSequenceActor(const FObjectInitializer& ObjectInitializer);

};

