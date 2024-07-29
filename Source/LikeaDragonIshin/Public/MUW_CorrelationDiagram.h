#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECorrelationCharacter.h"
#include "ECorrelationOrganization.h"
#include "MacanUIInterfaceCorrelation.h"
#include "MacanUserWidget.h"
#include "MUW_CorrelationDiagram.generated.h"

class UCanvasPanel;
class UMUW_MainMenuCorrelationArrow;
class UMUW_MainMenuCorrelationGroup;
class UMUW_MainMenuCorrelationPerson;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_CorrelationDiagram : public UMacanUserWidget, public IMacanUIInterfaceCorrelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMUW_MainMenuCorrelationGroup*> groupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMUW_MainMenuCorrelationArrow*> arrowList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMUW_MainMenuCorrelationPerson*> allPersonList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationOrganization selectGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationCharacter selectPersonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectPersonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D rtPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FitScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float animationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* p_canvasRoot;
    
    UMUW_CorrelationDiagram();

    UFUNCTION(BlueprintCallable)
    void PlayZoomOutAnimation(FVector2D cursorPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayZoomInAnimation(FVector2D cursorPosition);
    
    UFUNCTION(BlueprintCallable)
    void GetCursorMoveRange(UPARAM(Ref) float& Left, UPARAM(Ref) float& Right, UPARAM(Ref) float& Top, UPARAM(Ref) float& Bottom);
    

    // Fix for true pure virtual functions not being implemented
};

