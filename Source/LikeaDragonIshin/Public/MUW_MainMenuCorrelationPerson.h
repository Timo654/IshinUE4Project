#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECorrelationCharacter.h"
#include "ECorrelationEdgeTag.h"
#include "MacanUIInterfaceCorrelation.h"
#include "MacanUserWidget.h"
#include "MUW_MainMenuCorrelationPerson.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MainMenuCorrelationPerson : public UMacanUserWidget, public IMacanUIInterfaceCorrelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationCharacter characterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D absolutePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D absoluteSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isNeedCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath faceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSelecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationEdgeTag edgeTag;
    
    UMUW_MainMenuCorrelationPerson();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectFocusAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomScaleRate() const;
    

    // Fix for true pure virtual functions not being implemented
};

