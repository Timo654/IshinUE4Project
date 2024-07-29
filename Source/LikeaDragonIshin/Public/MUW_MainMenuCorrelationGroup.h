#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECorrelationCharacter.h"
#include "ECorrelationEdgeTag.h"
#include "ECorrelationOrganization.h"
#include "MacanUIInterfaceCorrelation.h"
#include "MacanUserWidget.h"
#include "MUW_MainMenuCorrelationGroup.generated.h"

class UMUW_MainMenuCorrelationOrg;
class UMUW_MainMenuCorrelationPerson;

UCLASS(Blueprintable, EditInlineNew)
class UMUW_MainMenuCorrelationGroup : public UMacanUserWidget, public IMacanUIInterfaceCorrelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D groupSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationOrganization organizationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationCharacter focusCharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECorrelationEdgeTag edgeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMUW_MainMenuCorrelationOrg* organaizationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMUW_MainMenuCorrelationPerson*> personList;
    
    UMUW_MainMenuCorrelationGroup();

    UFUNCTION(BlueprintCallable)
    TArray<UMUW_MainMenuCorrelationPerson*> GetCharacters();
    

    // Fix for true pure virtual functions not being implemented
};

