#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BulletUIData.h"
#include "DamageDisp.h"
#include "EBtlBuffDebuffStatsType.h"
#include "EBtlDamageType.h"
#include "EBtlStyle.h"
#include "EBtlValuation.h"
#include "EUICardLayout.h"
#include "EnemyUIData.h"
#include "EnemyUIDispData.h"
#include "InputStateIK.h"
#include "MacanUIData.h"
#include "TaishiCardData.h"
#include "TaishiCardDataLayout.h"
#include "TaishiCardDataList.h"
#include "TaishiCardState.h"
#include "TaishiCardStatusLayout.h"
#include "TaishiCardStatusList.h"
#include "WeaponUIData.h"
#include "MacanUIDataBattleMain.generated.h"

UCLASS(Blueprintable)
class UMacanUIDataBattleMain : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 logical_HP_max;
    
    UMacanUIDataBattleMain();

    UFUNCTION(BlueprintCallable)
    void updateEnemyFull(int32 idx, UPARAM(Ref) FEnemyUIData& en);
    
    UFUNCTION(BlueprintCallable)
    void updateEnemy(int32 idx, bool isInVP, const FVector2D& Pos, const FVector2D& d_pos, int32 hp, int32 Armor, bool isInVP_OSM, float OSMarkerAngle, bool _isVisibleBossDisp);
    
    UFUNCTION(BlueprintCallable)
    void setWeapon_Special(const FWeaponUIData& weapon);
    
    UFUNCTION(BlueprintCallable)
    void setWeapon_Ranbu(const FWeaponUIData& weapon1, const FWeaponUIData& weapon2);
    
    UFUNCTION(BlueprintCallable)
    void setWeapon_Katana(const FWeaponUIData& weapon);
    
    UFUNCTION(BlueprintCallable)
    void setWeapon_Gun(const FWeaponUIData& weapon, const FBulletUIData& bullet);
    
    UFUNCTION(BlueprintCallable)
    void setValuation(EBtlValuation in_val);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(EBtlStyle in_style, bool is_initialize);
    
    UFUNCTION(BlueprintCallable)
    void setScoreRank(int32 in_rank);
    
    UFUNCTION(BlueprintCallable)
    void setRengekiCount(int32 in_count);
    
    UFUNCTION(BlueprintCallable)
    void setLv_Style(EBtlStyle in_style, int32 in_Lv);
    
    UFUNCTION(BlueprintCallable)
    void setLv_PL(int32 in_Lv);
    
    UFUNCTION(BlueprintCallable)
    void setKillCount(int32 in_count);
    
    UFUNCTION(BlueprintCallable)
    void setInputState(const FInputState& in_state);
    
    UFUNCTION(BlueprintCallable)
    void setInHact(bool isIn);
    
    UFUNCTION(BlueprintCallable)
    void setCardStatus_layout(EBtlStyle Style, const FTaishiCardStatusLayout& in_status);
    
    UFUNCTION(BlueprintCallable)
    void setCardStatus_detail(EBtlStyle Style, EUICardLayout layout, const FTaishiCardState& in_status);
    
    UFUNCTION(BlueprintCallable)
    void setCardStatus(const FTaishiCardStatusList& in_status);
    
    UFUNCTION(BlueprintCallable)
    void setCardData_layout(EBtlStyle Style, const FTaishiCardDataLayout& in_data);
    
    UFUNCTION(BlueprintCallable)
    void setCardData_detail(EBtlStyle Style, EUICardLayout layout, const FTaishiCardData& in_data);
    
    UFUNCTION(BlueprintCallable)
    void setCardData(const FTaishiCardDataList& in_data);
    
    UFUNCTION(BlueprintCallable)
    void setBullet(const FBulletUIData& bullet);
    
    UFUNCTION(BlueprintCallable)
    void setBuffDebuff(EBtlBuffDebuffStatsType Type, float gauge_val);
    
    UFUNCTION(BlueprintCallable)
    void resetEnemyHactGauge();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void removeEnemy(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    void removeBuffDebuff(EBtlBuffDebuffStatsType Type);
    
    UFUNCTION(BlueprintCallable)
    void playAdmirable();
    
    UFUNCTION(BlueprintCallable)
    void on();
    
    UFUNCTION(BlueprintCallable)
    void off();
    
    UFUNCTION(BlueprintCallable)
    void KillCountOn();
    
    UFUNCTION(BlueprintCallable)
    void KillCountOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSetWeapon_Special() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSetWeapon_Ranbu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSetWeapon_Katana() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSetWeapon_Gun() const;
    
    UFUNCTION(BlueprintCallable)
    bool isResetEnemyHactGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPlayingScoreValuation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isHactNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCardInit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isAdmirablePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUIData getWeapon_Special() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUIData getWeapon_Ranbu2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUIData getWeapon_Ranbu1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUIData getWeapon_Katana() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponUIData getWeapon_Gun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBtlValuation getValuation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getScoreRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getRengekiCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDamageDisp getPlDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getNowHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getMAXHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getLv(EBtlStyle Style) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getLogicalHPMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getKillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputState getInputState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getHEAT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool getFocusedEnemyData(FEnemyUIDispData& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D getEnPos(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getEnMaxHP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getEnHP(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> getEnemyHactGaugeList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void getEnemyData(TArray<FEnemyUIDispData>& data_list) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, FDamageDisp> getEnDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTaishiCardStatusList getCardStatusList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 getCardRect(EUICardLayout layout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D getCardPosition(EUICardLayout layout) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTaishiCardDataList getCardDataList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBulletUIData getBullet_Gun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EBtlBuffDebuffStatsType, float> getBuffDebuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 getBonusHP() const;
    
    UFUNCTION(BlueprintCallable)
    void clearEnemyHactGaugeList();
    
    UFUNCTION(BlueprintCallable)
    void addPlDamage(const FVector2D& damage_pos, EBtlDamageType Type, int32 Damage, float in_fFollowTime, const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    void addEnemyHactGauge(int32 idx);
    
    UFUNCTION(BlueprintCallable)
    int32 addEnemy(UPARAM(Ref) FEnemyUIData& en);
    
    UFUNCTION(BlueprintCallable)
    void addEnDamage(int32 idx, EBtlDamageType Type, int32 Damage, float in_fFollowTime, const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable)
    void abortScoreValuation();
    
    UFUNCTION(BlueprintCallable)
    void abortAdmirable();
    
};

