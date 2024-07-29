#pragma once
#include "CoreMinimal.h"
#include "HumanCaption.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;
class UTexture2D;

USTRUCT(BlueprintType)
struct FHumanCaption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* OutActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    LIKEADRAGONISHIN_API FHumanCaption();
};

