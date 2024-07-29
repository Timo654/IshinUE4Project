#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DiEventElementPlayerBase.generated.h"

class ADiEventSequenceActor;
class UActorComponent;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDiEventElementPlayerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* m_parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiEventSequenceActor* m_Auth;
    
public:
    UDiEventElementPlayerBase();

};

