#pragma once
#include "CoreMinimal.h"
#include "DiEventSequenceActor.h"
#include "MovieCtrl.generated.h"

class UMacanUIDataOpenning;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API AMovieCtrl : public ADiEventSequenceActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataOpenning* uiData_;
    
public:
    AMovieCtrl(const FObjectInitializer& ObjectInitializer);

};

