#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmdSetResourceInfo.h"
#include "BtlParamManager.generated.h"

UCLASS(Blueprintable)
class UBtlParamManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FCmdSetResourceInfo> m_CmdSetMap;
    
public:
    UBtlParamManager();

};

