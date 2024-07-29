#pragma once
#include "CoreMinimal.h"
#include "EAnotherMainMenuUI.h"
#include "EUIResultOnOrOff.h"
#include "MacanUIData.h"
#include "MacanUIDataMainMenuAnotherLife.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMacanUIDataMainMenuAnotherLife : public UMacanUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float poultryFarmLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float dogHouseLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float carBedLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cookWareLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 harukaRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float harukaGuage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 harukaTextureId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> isUIUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleFishigRod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titlePoultryFarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleCarBed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleDogHouseLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleCookWare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText titleInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText stateFishigRod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText statePoultryFarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText stateCarBed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText stateDogHouseLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText stateCookWare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText stateInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameD00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameD01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameD02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameC00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameC01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText petNameC02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureD00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureD01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureD02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureC00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureC01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* patTextureC02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* bgTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* bgHarukaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> cursolFlag;
    
public:
    UMacanUIDataMainMenuAnotherLife();

    UFUNCTION(BlueprintCallable)
    bool IsNeedUpdateThisUI(EAnotherMainMenuUI uiType, EUIResultOnOrOff& result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitlePoultryFarm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleInterior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleFishigRod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleDogHouseLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleCookWare() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleCarBed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatePoultryFarm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateInterior() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateFishigRod() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateDogHouseLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateCookWare() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStateCarBed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameD02() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameD01() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameD00() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameC02() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameC01() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPetNameC00() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<bool> GetCursolFlags() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishUpdateUI(EAnotherMainMenuUI uiType);
    
};

