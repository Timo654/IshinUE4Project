#pragma once
#include "CoreMinimal.h"
#include "ActionObjectBase.h"
#include "EBtlPhase.h"
#include "EBtlSpecialBattle.h"
#include "EBtlStartType.h"
#include "EBtlStyle.h"
#include "BattleManager.generated.h"

class UBtlParamManager;
class UFighterManager;

UCLASS(Blueprintable)
class LIKEADRAGONISHIN_API UBattleManager : public UActionObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFighterManager* m_FighterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlParamManager* m_BtlParamManager;
    
public:
    UBattleManager();

    UFUNCTION(BlueprintCallable)
    void SetStartType(const EBtlStartType inStartType);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(const EBtlPhase InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlStartType GetStartType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlSpecialBattle GetSpecialType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlPhase GetPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBtlParamManager* GetParamManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFighterManager* GetFighterManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlStyle GetBattleStyle() const;
    
};

