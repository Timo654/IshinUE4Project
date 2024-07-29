#pragma once
#include "CoreMinimal.h"
#include "DiEventEditorParams_HumanCaption.generated.h"

USTRUCT(BlueprintType)
struct FDiEventEditorParams_HumanCaption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _texPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _beforeCenterX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _beforeCenterY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _beforeSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _beforeSizeY;
    
    LIKEADRAGONISHIN_API FDiEventEditorParams_HumanCaption();
};

