#pragma once
#include "CoreMinimal.h"
#include "EBtlDamageType.h"
#include "EN_TYPE.h"
#include "EnemyUIDispData.h"
#include "MacanUserWidget.h"
#include "Templates/SubclassOf.h"
#include "_BossDispRect.h"
#include "_Damage_impl.h"
#include "_EenmyTarget.h"
#include "MacanUserWidget_BtlEnemy.generated.h"

class UCanvasPanel;
class UMacanUserWidget_BtlBossDisp;
class UMacanUserWidget_BtlEnemySubLife;
class UMacanUserWidget_DamageNumDisp;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UMacanUserWidget_BtlEnemy : public UMacanUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EN_TYPE, TSubclassOf<UMacanUserWidget_BtlEnemySubLife>> wbp_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, F_EenmyTarget> target_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F_Damage_impl> pl_damage_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F_Damage_impl> en_damage_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlDamageType, TSubclassOf<UMacanUserWidget_DamageNumDisp>> wbp_damage_class_pl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBtlDamageType, TSubclassOf<UMacanUserWidget_DamageNumDisp>> wbp_damage_class_en;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget> wbp_offscreen_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BossLifes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_BtlBossDisp> wbp_BossDisp_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMacanUserWidget_BtlBossDisp> wbp_EnemyDisp_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* HactLifes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F_BossDispRect> bossHPSlot_below3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<F_BossDispRect> bossHPSlot_over4;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyUIDispData> data_list;
    
public:
    UMacanUserWidget_BtlEnemy();

};

