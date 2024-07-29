#pragma once
#include "CoreMinimal.h"
#include "ActionShogiBase.h"
#include "ShogiTaikyoku.generated.h"

class AShogiController;
class AShogiDialog;
class AShogiManager;
class AShogiModelManager;
class AShogiShikou;
class UMacanUIDataShogi;
class UMacanUIDataWandererSpeechBubble;
class UUIManager;

UCLASS(Blueprintable)
class AShogiTaikyoku : public AActionShogiBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiModelManager* ModelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataShogi* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManager* pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMacanUIDataWandererSpeechBubble* SpeechBubbleUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiDialog* dialog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiShikou* shikou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionShogiBase* Turn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionShogiBase* my_side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionShogiBase* other_side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShogiManager* m_p_manager;
    
public:
    AShogiTaikyoku(const FObjectInitializer& ObjectInitializer);

};

