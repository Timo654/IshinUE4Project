#pragma once
#include "CoreMinimal.h"
#include "EAgentKind.generated.h"

UENUM(BlueprintType)
enum class EAgentKind : uint8 {
    AK_Sakazuki,
    AK_TsukimiHanami,
    AK_EnemyAttribute,
    AK_MyAttribute,
    AK_Kasu,
    AK_Select,
    AK_Drop,
};

