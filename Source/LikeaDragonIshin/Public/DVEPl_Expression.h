#pragma once
#include "CoreMinimal.h"
#include "DiEventElementPlayerBase.h"
#include "DVEPl_Expression.generated.h"

class ADevil2Human;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UDVEPl_Expression : public UDiEventElementPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADevil2Human* Human;
    
public:
    UDVEPl_Expression();

};

